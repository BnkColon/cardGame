
/* 
 * File:   Main.cpp
 * Author: R. Arce-Nazario
 * 
 * Created on March 5, 2012, 10:50 PM
 * 
 * Client for testing the Deck class.
 */

#include <iostream>
#include "Deck.h"
#include "Player.h"
//#include "Card.h"
#include <cstdlib>
#include <stack>
#include <queue>
#include <vector>
int main() {

    vector <int> V;
    
    srand(time(0));

    Deck D;
    //Card C;
    Player P1;
    Player P2;

    cout << "Here's your deck: ";
    for (int i=0; i<D.size(); ++i) // Deck of 52 cards
	cout << D.asCard(i) << " ";    // Convert the integers to cards
    cout << endl;

    D.shuffle();                   // Shuffle all cards
    cout << "After shuffle: ";

    for (int i=0; i<D.size(); ++i) // Deck of 52 shuffled cards
        cout << D.asCard(i) << " ";
    cout << endl;
     cout << endl ; 

	D.reparto(P1, P2);	          // Divide Deck in two bonches of 26 cards 
	//cout << "size" << P1.size() << endl; // size = 26
 	cout << "Player 1: " ;	   // Cards of player 1
    while(P1.size() != 0 ){
	cout << P1.asCard(P1.front()) << " " ;
	P1.pop();
}  cout << endl ; 
	cout << "Player 2: ";
   while(P2.size() != 0 ){          // Cards of player 2
        cout << P2.asCard(P2.front()) << " " ;
        P2.pop();
} cout << endl ; 


//while(!P1.empty() && !P2.empty()){

    int pL1;
//    cout << "Carta Player 1: ";
   //      << P1.upCard();

    int pL2 ;//= P2.upCard();

stack<int> Game; // Create a Stack for the game
  //cout << "Enr" << endl ; 
cout << "size" << P1.size() << endl;

    //cout << "Carta JugadorF 1: "<< P1.asCard(P1.front()) << endl; // la muestra
    //cout <<  "Carta JugadorF 2: "<< P2.front() << endl; 


    
    pL1 = P1.back(); // Coge la carta del tope de player1
    cout << "Carta Jugador 1: "<< P1.asCard(pL1) << endl; // la muestra
    pL2 = P2.back();// Coge la carta del tope de player2
    cout <<  "Carta Jugador 2: "<< P2.asCard(pL2) << endl; // la muestra
    Game.push(P1.back()); // la pone en la mesa
    Game.push(P2.back()); // la pone en la mesa
    Game.pop();
    Game.pop();
    int value1 = pL1 % 13 ; // hacemos modulo 13 para poder comparar
    int value2 = pL2 % 13 ;
    // determine the number of the card
    
    if(value1 < value2){
        // cout << pL2 << endl;
        // cout << pL1 << endl;
        cout << "Player 2 win " << endl;
        P2.push(pL1); // Player 2 gana las 2 cartas
        P2.push(pL2);
    }
    if(value1 > value2){

        cout << "Player 1 win "<< endl;
        P1.push(pL1); // Player 2 gana las 2 cartas
        P1.push(pL2);

    }
    if(value1 == value2){
        
        cout << "WAR!! "<< endl;

    }
    cout << "size" << P1.size() << endl;


// Cuando hago el output sale como si las bajaras de los players estubieran vacias
//         cout << "Player 1: " ;     // Cards of player 1
//     while(P1.size() != 0 ){
//     cout << P1.asCard(P1.front()) << " " ;
//     P1.pop();
// }  cout << endl ; 
//     cout << "Player 2: ";
//    while(P2.size() != 0 ){          // Cards of player 2
//         cout << P2.asCard(P2.front()) << " " ;
//     P2.pop();
// } cout << endl ; 

//}




/*	
    cout << "Player 1:" ;
	for(int i =0; i<26; ++i){    
    		P1.myHand(D.asCard(i));
		D.pop(i);	
	}
    cout << "Now deck" ;
	for (int i=0; i<D.size(); ++i)
        cout << D.asCard(i) << " ";
    cout << endl;
*/
    return 0;
}

   
