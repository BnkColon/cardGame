/* 
 * File:   Player.cpp
 * Author: Bianca I. Colon Rosado
 * Student Number:
 * 
 * Created on December 1, 2014, 10:24 AM
 *
 * Client for testing the Deck class.
 */

#include <iostream>
#include "Deck.h"
#include "Player.h"
#include <cstdlib>
#include <stack>
#include <deque>
#include <vector>
int main() {

    vector <int> V;
    
    srand(time(0));

    Deck D;
    //Card C;
    Player P1;
    Player P2;


     char temp = 'x';
        while (temp != '\n'){
            cout<< "\n____    __    ____  ___      .______           _______      ___      .___  ___.  _______ " << endl;
cout<<            "\\   \\  /  \\  /   / /   \\     |   _  \\         /  _____|    /   \\     |   \\/   | |   ____|" << endl;
cout<<             " \\   \\/    \\/   / /  ^  \\    |  |_)  |       |  |  __     /  ^  \\    |  \\  /  | |  |__   " << endl;
cout<<             "  \\            / /  /_\\  \\   |      /        |  | |_ |   /  /_\\  \\   |  |\\/|  | |   __|  " << endl;
cout<<             "   \\    /\\    / /  _____  \\  |  |\\  \\----.   |  |__| |  /  _____  \\  |  |  |  | |  |____ " << endl;
cout<<             "    \\__/  \\__/ /__/     \\__\\ | _| `._____|    \\______| /__/     \\__\\ |__|  |__| |_______|" << endl << endl;
            
            cout << "Press Enter to START... " << endl << endl << endl;

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

            cin.get(temp);

        }

	D.reparto(P1, P2);	          // Divide Deck in two bonches of 26 cards 

    int pL1;
    int pL2 ;//= P2.upCard();

stack<int> Game; // Create a Stack for the game

	int compa = 0;
while(true){


    char temp = 'x';
        while (temp != '\n'){

            cout << "Round: " << compa << endl;
            cout<< "\n____    __    ____  ___      .______           _______      ___      .___  ___.  _______ " << endl;
cout<<            "\\   \\  /  \\  /   / /   \\     |   _  \\         /  _____|    /   \\     |   \\/   | |   ____|" << endl;
cout<<             " \\   \\/    \\/   / /  ^  \\    |  |_)  |       |  |  __     /  ^  \\    |  \\  /  | |  |__   " << endl;
cout<<             "  \\            / /  /_\\  \\   |      /        |  | |_ |   /  /_\\  \\   |  |\\/|  | |   __|  " << endl;
cout<<             "   \\    /\\    / /  _____  \\  |  |\\  \\----.   |  |__| |  /  _____  \\  |  |  |  | |  |____ " << endl;
cout<<             "    \\__/  \\__/ /__/     \\__\\ | _| `._____|    \\______| /__/     \\__\\ |__|  |__| |_______|" << endl << endl;
            
            cout << "Press Enter to Next Round!... " << endl;

            cin.get(temp);

        }

    
    pL1 = P1.back(); // Coge la carta del tope de player1
    cout << "Carta Jugador 1: "<< P1.asCard(pL1) << endl; // la muestra
    pL2 = P2.back();// Coge la carta del tope de player2
    cout <<  "Carta Jugador 2: "<< P2.asCard(pL2) << endl; // la muestra
    P2.pop_back();
    P1.pop_back();

    // Tira cartas en Stack 
    Game.push(pL1); // la pone en la mesa
    Game.push(pL2); // la pone en la mesa
    
    // Saca cartas de la mesa para comparar
    Game.pop();
    Game.pop();

    // Saca valor de cartas sobre la mesa
    int value1 = pL1 % 13 ; // hacemos modulo 13 para poder comparar
    int value2 = pL2 % 13 ;
    // determine the number of the card
    
    // Compara el valor de value1 and el valor de value2
    if(value1 < value2){
        // cout << pL2 << endl;
        // cout << pL1 << endl;
        P2.push_front(pL1); // Player 2 gana las 2 cartas
        P2.push_front(pL2);
        cout << "Player 2 win " << endl;
        compa++;
        cout << "Round number: " << compa << endl << endl;
    }
    if(value1 > value2){

        cout << "Player 1 win "<< endl;
        cout << "Round number: " << compa << endl << endl;
        P1.push_front(pL1); // Player 2 gana las 2 cartas
        P1.push_front(pL2);
        compa++;
    }
    if(value1 == value2){
        compa++;
        //cout << ""<< endl;
        cout << "Round number: " << compa << endl << endl;
        char temp = 'x';
        while (temp != '\n'){

            cout << "____    __    ____  ___      .______       __   __ "<<endl;
            cout<<"  \\   \\  /  \\  /   / /   \\     |   _  \\     |  | |  |"<<endl;
            cout<<"   \\   \\/    \\/   / /  ^  \\    |  |_)  |    |  | |  |"<<endl;
            cout<<"    \\            / /  /_\\  \\   |      /     |  | |  |"<<endl;
            cout<<"     \\    /\\    / /  _____  \\  |  |\\  \\----.|__| |__|"<<endl;
            cout<<"      \\__/  \\__/ /__/     \\__\\ | _| `._____|(__) (__)"<<endl<<endl;
            cout << "Press Enter to continue... " << endl;

            cin.get(temp);

        }
        // Si quedan menos de 4 cartas no puede haber guerra
        if (P1.size() < 4 || P2.size() < 4){
            if(P1.size() < 4){
            temp = 'x';
        while (temp != '\n'){

            
        cout <<"##################################################################################################################\n"
             <<"#               _______      ___      .___  ___.  _______      ______   ____    ____  _______ .______            #\n" 
             <<"#              /  _____|    /   \\     |   \\/   | |   ____|    /  __  \\  \\   \\  /   / |   ____||   _  \\           #\n"   
             <<"#             |  |  __     /  ^  \\    |  \\  /  | |  |__      |  |  |  |  \\   \\/   /  |  |__   |  |_)  |          #\n"
             <<"#             |  | |_ |   /  /_\\  \\   |  |\\/|  | |   __|     |  |  |  |   \\      /   |   __|  |      /           #\n"
             <<"#             |  |__| |  /  _____  \\  |  |  |  | |  |____    |  `--'  |    \\    /    |  |____ |  |\\  \\----.      #\n"
             <<"#              \\______| /__/     \\__\\ |__|  |__| |_______|    \\______/      \\__/     |_______|| _| `._____|      #\n"
             <<"##################################################################################################################\n";
            cout << "Player 2 WIN" << endl;
            cout << "Player 1 LOSER " << endl;
            cout << "Press Enter to continue... " << endl;
            cin.get(temp);
            break;



        }
            }else{
             temp = 'x';
            while (temp != '\n'){
            
        cout <<"##################################################################################################################\n"
             <<"#               _______      ___      .___  ___.  _______      ______   ____    ____  _______ .______            #\n" 
             <<"#              /  _____|    /   \\     |   \\/   | |   ____|    /  __  \\  \\   \\  /   / |   ____||   _  \\           #\n"   
             <<"#             |  |  __     /  ^  \\    |  \\  /  | |  |__      |  |  |  |  \\   \\/   /  |  |__   |  |_)  |          #\n"
             <<"#             |  | |_ |   /  /_\\  \\   |  |\\/|  | |   __|     |  |  |  |   \\      /   |   __|  |      /           #\n"
             <<"#             |  |__| |  /  _____  \\  |  |  |  | |  |____    |  `--'  |    \\    /    |  |____ |  |\\  \\----.      #\n"
             <<"#              \\______| /__/     \\__\\ |__|  |__| |_______|    \\______/      \\__/     |_______|| _| `._____|      #\n"
             <<"##################################################################################################################\n";
            cout << "Player 1 WIN" << endl;
            cout << "Player 2 LOSER " << endl;
            cout << "Press Enter to continue... " << endl;
            cin.get(temp);
            break;

        }
    }
        }else{

            // Meto las 2 cartas de guerra en stack 
            Game.push(pL1);
            Game.push(pL2);


            // Saco 3 cartas de cada player y guardo en stack
            Game.push(P1.back());
            P1.pop_back();
            Game.push(P1.back());
            P1.pop_back();
            Game.push(P1.back());
            P1.pop_back();

            Game.push(P2.back());
            P2.pop_back();
            Game.push(P2.back());
            P2.pop_back();
            Game.push(P2.back());
            P2.pop_back();


            // Saco la 4ta carta para comparar guerra
            pL1 = P1.back(); // Coge la carta del tope de player1
            cout << "Carta Jugador 1: "<< P1.asCard(pL1) << endl; // la muestra
            pL2 = P2.back();// Coge la carta del tope de player2
            cout <<  "Carta Jugador 2: "<< P2.asCard(pL2) << endl; // la muestra
            P2.pop_back();
            P1.pop_back();

                // Tira cartas en Stack 
            Game.push(pL1); // la pone en la mesa
            Game.push(pL2); // la pone en la mesa

            Game.pop();
            Game.pop();
            
            int value1 = pL1 % 13 ; // hacemos modulo 13 para poder comparar
            int value2 = pL2 % 13 ;

            if(value1 < value2){
            // cout << pL2 << endl;
            // cout << pL1 << endl;
            cout << "Player 2 win " << endl;
            cout << "Round number: " << compa << endl;
            P2.push_front(pL1); // Player 2 gana las 2 cartas
            P2.push_front(pL2);
            P2.push_front(Game.top());
            Game.pop();
            P2.push_front(Game.top());
            Game.pop();
            P2.push_front(Game.top());
            Game.pop();
            P2.push_front(Game.top());
            Game.pop();
            P2.push_front(Game.top());
            Game.pop();
            P2.push_front(Game.top());
            Game.pop();
            P2.push_front(Game.top());
            Game.pop();
            P2.push_front(Game.top());
            Game.pop();

            }
            if(value1 > value2){

            cout << "Player 1 win "<< endl;
            cout << "Round number: " << compa << endl;
            P1.push_front(pL1); // Player 2 gana las 2 cartas
            P1.push_front(pL2);
            P1.push_front(Game.top());
            Game.pop();
            P1.push_front(Game.top());
            Game.pop();
            P1.push_front(Game.top());
            Game.pop();
            P1.push_front(Game.top());
            Game.pop();
            P1.push_front(Game.top());
            Game.pop();
            P1.push_front(Game.top());
            Game.pop();
            P1.push_front(Game.top());
            Game.pop();
            P1.push_front(Game.top());
            Game.pop();

            }
            if(value1 == value2){
            cout << "WAR!! "<< endl;
            cout << "Round number: " << compa << endl;
            }
        }
    }
    //cout << "size" << P1.size() << endl;
}

    return 0;
}
