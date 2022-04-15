#ifndef DECK_H_
#define DECK_H_

#include "Card.h"
#include <vector>
#include <algorithm>
#include <cstdlib>
#include <ctime>

class Deck : public Card
{
    private:
        std::vector<Card*> deck;

    public:
        Deck() = default;
        void shuffle();
        Card drawCard();
        int getDeckSize();

};
  

#endif // DECK_H_
