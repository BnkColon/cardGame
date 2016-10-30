

/* Bianca Colon

#ifndef CARD_H
#define CARD_H
#include <vector>
#include <string>
using namespace std;

// Card is a child class of vector<int>,
// will inherit all its cool functions.
class Card : public vector<int> {
public:
    // Constructor
    Card();

    // Returns the card at position as a number,suit.
    string asCard(int pos);
};


// Some string definitions for the suits
const char heart[]   = "\u2665";
const char spade[]   = "\u2660";
const char diamond[] = "\u2666";
const char club[]    = "\u2663";


#endif   CARD_H 
*/

