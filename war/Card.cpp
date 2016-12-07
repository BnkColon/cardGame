

/* 
 * File:   Player.cpp
 * Author: Bianca I. Colon Rosado
 * Student Number:
 * 
 * Created on December 1, 2014, 10:24 AM
 * 
 * Implementation for the functions of the Player class.
 */
/*
#include "Card.h"
#include "Deck.h"
#include <iostream>
#include <vector>
#include <algorithm>
#include <sstream>

Card::Card() {
    // initially just fill the deck with 0 through 51
    for (int i=0; i<52; ++i) push_back(i);
}


string Card::asCard(int pos) {
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




*/


