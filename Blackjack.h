#ifndef BLACKJACK_H
#define BLACKJACK_H

#include <iostream>
#include <vector>
#include "Deck.h"

class Blackjack
{
private:
    Deck deck;
    std::vector<Card> playerHand;
    int playerTotal;

    std::vector<Card> computerHand;
    int computerTotal;

public:
    Blackjack(int numDecks = 1);
    Blackjack(const Blackjack& b);
    ~Blackjack();
    Blackjack& operator =(const Blackjack& b);
    void hit(std::vector<Card>& hand);
    friend std::ostream& operator <<(std::ostream& os, const Blackjack& b);
};

#endif /* BLACKJACK_H */
