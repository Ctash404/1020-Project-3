// Conner Tash
// Program for a user to play a game a game of cards by selecting a orange or purple one
// with orange counting double. Then compares the value to a computer value to which is higher
// and add those values to an over all total.
#include "Card.h"
#include "Deck.h"
#include "Hand.h"
#include "Player.h"
#include <iostream>
using namespace std;

int main() {

  int roundsPlayed {0}, intChoice {0};
  Card humChoice, compChoice;

    cout << "Welcome to TigerGame!" << endl;

  // 1. Create a deck of cards and shuffle it.
    Deck cardDeck;
    cardDeck.shuffle();

  // Extra Credit #1
    cout << "Enter the amount of rounds you want to play: ";
    cin >> roundsPlayed;
    while(roundsPlayed > 10 || roundsPlayed < 1)
    {
        cout << "Please enter a number less than 10: ";
        cin >> roundsPlayed;
    }
  
  // 2. Create two players, each one with 5 cards in their hand.
    Player Human(cardDeck, roundsPlayed);
    Player Computer(cardDeck, roundsPlayed);

    cout << "The deck was shuffled and each player has drawn " << roundsPlayed << " cards." << endl;

  // 3. Play five rounds. In each round:
    for(int r = 0; r < roundsPlayed; r++)
    {
        cout << "\n\nRound " << r + 1 << "\n-------\n";

        compChoice = Computer.hand.dealCard(1);

        cout << "The computer plays: " << compChoice.printCard() << endl;

  //    - Show Human their hand of cards so that they can make a selection.
        cout << "Your hand: " << Human.hand.printHand() << endl;
        cout << "Which card do you want to play? ";
        cin >> intChoice;

        // Validation to make sure they put a card the player has
        while((intChoice < 0) || (intChoice > roundsPlayed - r))
        {
            cout << "You do not have this card. Enter a valid choice: ";
            cin >> intChoice;
        }

  //    - Have Human deal their card. 
        humChoice = Human.hand.dealCard(intChoice);
        cout << "You played: " << humChoice.printCard() << endl;

  //    - Determine who won the round and update points accordingly.
        if(humChoice.getValue() > compChoice.getValue())  //Human wins
        {
            cout << "You win this round!" << endl;
            Human.score = Human.score + humChoice.getValue();
        }
        else if (humChoice.getValue() < compChoice.getValue())  //computer wins
        {
            cout << "The computer wins this round!" << endl;
            Computer.score = Computer.score + compChoice.getValue();
        }
        else
        {
            cout << "Tie!" << endl;
        }
  
  //    - Print results for current round.
        cout << "\nCurrent scores: " << endl;
        cout << "Human: " << Human.score << endl;
        cout << "Computer: " << Computer.score << endl;

    }


  // 4. Print final game results.  
    cout << "\n\nFINAL SCORE:\n";
    cout << "Human: " << Human.score << endl;
    cout << "Computer: " << Computer.score << endl;
  
  return 0;
}
