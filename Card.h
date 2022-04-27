#ifndef CARD_H_
#define CARD_H_

#include <string>

class Card
{
    // Intialize the enum first so that it is ready for the private data member
    public:
        enum Color {purple, orange};
    private:
        int rank {0};
        Color color {purple};
        int value {0};
    public:
        Card() = default;
        Card(int rank, Color color) : rank{rank}, color{color} 
        {
            value = (color + 1) * rank;
        }

        std::string printCard();
        Color getColor();
        
        int getRank();
        int getValue();
};
  

#endif // CARD_H_
