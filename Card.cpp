#include "Card.h"

Card::Card(const char* newValue, const char* newSuit)
:value(newValue), suit(newSuit)
{

}

Card::Card(const Card& c)
:value(c.value), suit(c.suit)
{

}

Card::~Card()
{

}

Card& Card::operator =(const Card& c)
{
    value = c.value;
    suit = c.suit;

    return *this;
}

std::ostream& operator <<(std::ostream& os, const Card& c)
{
    os<<c.value<<" "<<c.suit;
    return os;
}
