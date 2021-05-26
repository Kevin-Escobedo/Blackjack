#include "Deck.h"

Deck::Deck(int numDecks)
:deck(nullptr)
{
    //Set minimum decks to 1
    numDecks = (numDecks < 1) ? 1 : numDecks;

    //52 cards in a deck, multiplied by how many decks
    length = 52 * numDecks;

    deck = new Card[length];

    int cardIndex = 0;

    for(int i = 0; i < numDecks; i++)
    {
        //Iterate through the values 
        for(int j = 0; j < 13; j++)
        {
            //Iterate through the suits
            for(int k = 0; k < 4; k++)
            {
                Card c(values[j], suits[k]);
                deck[cardIndex] = c;
                cardIndex++;
            }
        }
    }
}

Deck::Deck(const Deck& d)
:deck()
{
    delete[] deck;
    length = d.length;
    deck = new Card[length];
    for(int i = 0; i < length; i++)
    {
        deck[i] = d.deck[i];
    }
}

Deck::~Deck()
{
    delete[] deck;
}

Deck& Deck::operator =(const Deck& d)
{
    delete[] deck;
    length = d.length;

    deck = new Card[length];
    for(int i = 0; i < length; i++)
    {
        deck[i] = d.deck[i];
    }

    return *this;
}

void Deck::shuffleDeck()
{
    unsigned seed = std::chrono::system_clock::now().time_since_epoch().count();
    std::shuffle(&deck[0], &deck[length], std::default_random_engine(seed));
}

const Card Deck::operator [](const int index)
{
    if(index < 0 || index >= length)
    {
        return nullptr;
    }

    else
    {
        return deck[index];
    }
}

const Card Deck::draw()
{
    if(length < 0)
    {
        return nullptr;
    }

    else
    {
        return deck[length--];
    }
}

std::ostream& operator <<(std::ostream& os, const Deck& d)
{
    for(int i = 0; i < d.length; i++)
    {
        os<<d.deck[i]<<std::endl;
    }

    return os;
}
