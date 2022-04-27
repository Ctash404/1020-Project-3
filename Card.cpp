#include "Card.h"

// Prints the card with the as color:rank/value of the card
std::string Card::printCard()
{
    if(color == purple)
    { 
        return "purple:" + std::to_string(rank); 
    }
    else
    { 
        return "orange:" + std::to_string(rank); 
    }
}
// Returns rank
int Card::getRank()
{
    return rank;
}
// Returns color
Card::Color Card::getColor()
{
    return color;
}
// Returns value
int Card::getValue()
{
    if(color == purple)
    {
        return rank;
    }
    else
    { 
        return rank * 2; 
    }
}