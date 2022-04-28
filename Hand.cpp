#include "Hand.h"

// Places this many cards into the hand
Hand::Hand(Deck &deck, int N)
{
    for(int i = 0; i < N; i++)
    {
        hand.push_back(deck.drawCard());
    }
}

// Use a stirng stream to return the combined output of the hand
std::string Hand::printHand()
{
    std::stringstream ss;

    // Iterate through the vector to place into the stream
    for(unsigned int i = 0; i < hand.size(); i++)
    {
        ss << " [" << i + 1 << "] " << hand.at(i).printCard();
    }

    return ss.str();
}

// Lets the player choose a card and play it removing it 
// from their hand
Card Hand::dealCard(int num)
{
    Card playedCard = hand.at(num - 1); 
 
    hand.erase(hand.begin() + num - 1);

    return playedCard;
}

// Returns the size of the players current hand
int Hand::getHandSize()
{
    return hand.size();
}

