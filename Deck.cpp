#include "Deck.h"

// Default constructor to make sure card is within the range
Deck::Deck()
{
    for(int i = 1; i <= 10; i++)
    {
        Card purpleCard(i, Card::purple);
        deck.push_back(purpleCard);
    }

    for(int i = 1; i <= 10; i++)
    {
        Card orangeCard(i, Card::orange);
        deck.push_back(orangeCard);
    }
}
// Randomizes the cards inside of the deck
void Deck::shuffle()
{
    srand(unsigned(time(0)));
    std::random_shuffle(deck.begin(), deck.end());
}

// Pulls one of the cards out of the deck
Card Deck::drawCard()
{
    Card card = deck.at(0);
    deck.erase(deck.begin());

    return card;
}
// Returns size of the deck
int Deck::getDeckSize()
{
    return deck.size();
}





