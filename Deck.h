#ifndef DECK_H
#define DECK_H

#include "Card.h"
#include <algorithm>

class Deck
{
private:
    Card* deck;
    int length = 0;

    const char* values[13] = {"2", "3", "4", "5", "6", "7", "8", "9", "10", "J", "Q", "K", "A"};
    const char* suits[4] = {"Club", "Spade", "Heart", "Diamond"};

public:
    Deck(int numDecks=1);
    Deck(const Deck& d);
    ~Deck();
    Deck& operator =(const Deck& d);
    void shuffleDeck();
    const Card operator [](const int index);
    const Card draw();
    friend std::ostream& operator <<(std::ostream& os, const Deck& d);
    
};

#endif /* DECK_H */
