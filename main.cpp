#include "Blackjack.h"

int main(int argc, char** argv)
{
    int numDecks = 1;

    if(argc == 2)
    {
        numDecks = atoi(argv[1]);
    }

    Blackjack b(numDecks);
    std::cout<<b<<std::endl;

    return 0;
}
