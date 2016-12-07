/* 
 * File:   Deck.cpp
 * Author: R. Arce-Nazario
 * 
 * Created on March 5, 2012, 10:50 PM
 * 
 * Implementation for the functions of the Deck class.
 */

#include "Deck.h"
#include <iostream>
#include <vector>
#include <algorithm>
#include <sstream>
#include <stack>
#include "Player.h"
#include <deque>
Deck::Deck() {
    // initially just fill the deck with 0 through 51
    for (int i=0; i<52; ++i) push_back(i);
}

void Deck::shuffle() {
    // luckily the algorithm library includes a simple way of 
    // randomly permuting the contents of the vector
    random_shuffle(begin(), end());
}

string Deck::asCard(int pos) {
    if (pos < 0 || pos > 52 ) return "BAD";

    stringstream ss;

    // determine the number of the card
    switch ((*this)[pos] % 13) {
        case 0: ss << "2";
            break;
        case 1: ss << "3";
            break;
        case 2: ss << "4";
            break;
        case 3: ss << "5";
            break;
        case 4: ss << "6";
            break;
        case 5: ss << "7";
            break;
        case 6: ss << "8";
            break;
        case 7: ss << "9";
            break;
        case 8: ss << "10";
            break;
        case 9: ss << "J";
            break;
        case 10: ss << "Q";
            break;
        case 11: ss << "K";
            break;
        case 12: ss << "A";
            break;
        default: ss << (*this)[pos] % 13;
    }

    string st = ss.str();

    // determine the card's suit

    switch ((*this)[pos] / 13) {
        case 0:
            st += club;
            break;
        case 1:
            st += diamond;
            break;
        case 2:
            st += heart;
            break;
        case 3:
            st += spade;
            break;
     }
    return st;
}

void Deck::reparto(Player& p1, Player& p2){

	

	for (int i=0; i<52; ++i){
		int carta = (*this)[i];
		if(i%2 == 0)
			p1.push_back(carta);
	
		else
			p2.push_back(carta);

//	(*this).erase(((*this).begin()), ((*this).begin())+1);
	
	}
	(*this).clear();

}





void Deck::war(int p1, int p2, int p3, int p4, int c1, int c2, int c3, int c4){
	
	stack<int> cardWar;

	cardWar.push(p1); 
	cardWar.push(p2);
	cardWar.push(p3);
	cardWar.push(c1);
	cardWar.push(c2);
	cardWar.push(c3);
	cardWar.push(c4);
	cardWar.push(p4);

}



    
