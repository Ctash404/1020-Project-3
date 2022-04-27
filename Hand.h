#ifndef HAND_H_
#define HAND_H_

#include "Card.h"
#include "Deck.h"
#include <vector>
#include <string>
#include <sstream>

class Hand
{
    private:
        std::vector<Card> hand;
    public:
        Hand() = default;
        Hand(Deck &deck, int N);
        std::string printHand();
        Card dealCard(int num);
        int getHandSize();

};

#endif // HAND_H_
