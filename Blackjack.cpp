#include "Blackjack.h"

Blackjack::Blackjack(int numDecks)
:deck(), playerHand(), playerTotal(0), computerHand(), computerTotal(0)
{
    deck = Deck(numDecks);
    deck.shuffleDeck();
}

Blackjack::Blackjack(const Blackjack& b)
:deck(), playerHand(), playerTotal(b.playerTotal), computerHand(), computerTotal(b.computerTotal)
{
    deck = b.deck;
    playerHand = b.playerHand;
    computerHand = b.computerHand;
}

Blackjack::~Blackjack()
{

}

Blackjack& Blackjack::operator =(const Blackjack& b)
{
    deck = b.deck;

    playerHand = b.playerHand;
    playerTotal = b.playerTotal;

    computerHand = b.computerHand;
    computerTotal = b.computerTotal;

    return *this;
}

void Blackjack::hit(std::vector<Card>& hand)
{
    hand.push_back(deck.draw());
}

std::ostream& operator <<(std::ostream& os, const Blackjack& b)
{
    os<<"Player Total: "<<b.playerTotal<<std::endl;
    int playerHandSize= b.playerHand.size();
    for(int i = 0; i < playerHandSize; i++)
    {
        os<<b.playerHand[i]<<std::endl;
    }

    os<<"Computer Total: "<<b.computerTotal<<std::endl;
    int computerHandSize = b.computerHand.size();
    for(int i = 0; i < computerHandSize; i++)
    {
        os<<b.computerHand[i]<<std::endl;
    }

    return os;
}
