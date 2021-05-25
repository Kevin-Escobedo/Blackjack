#ifndef CARD_H
#define CARD_H

#include <iostream>

class Card
{
private:
    const char* value;
    const char* suit;

public:
    Card(const char* newValue="A", const char* newSuit="Club");
    Card(const Card& c);
    ~Card();
    Card& operator =(const Card& c);
    friend std::ostream& operator <<(std::ostream& os, const Card& c);
};

#endif /* CARD_H */
