
/* 
 * File:   Player.h
 * Author: Bianca I. Colon Rosado
 * Student Number: 
 *
 * Created on December 1, 2014, 2:52 PM
 * 
 * Declaration of class Player.
 */



#ifndef PLAYER_H
#define PLAYER_H
#include <vector>
#include <string>
#include <queue>
#include <deque>
//#include <DECK_H>
using namespace std;

// Player is a child class of vector<int>,
// will inherit all its cool functions.
class Player: public queue<int> {
public:
    // Constructor
    Player();
//    void myHand(int);

    string asCard(int carta);

};


#endif  
