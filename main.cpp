#include "Card.h"

int main(int argc, char** argv)
{
    const char* value = "A";
    const char* suit = "Spade";

    if(argc == 3)
    {
        value = argv[1];
        suit = argv[2];
    }

    Card c(value, suit);

    std::cout<<c<<std::endl;

    return 0;
}
