#include "Deck.h"

int main(int argc, char** argv)
{
    int numDecks = 1;

    if(argc == 2)
    {
        numDecks = atoi(argv[1]);
    }

    Deck d(numDecks);
    d.shuffleDeck();
    std::cout<<d<<std::endl;

    return 0;
}
