#ifndef GAME_H
#define GAME_H

#include "Player.h"
#include "NBAPlayer.h"
#include <vector>

class Game {
    std::vector<Player*> players;  // Vector to store pointers to Player objects
    int rounds;                    // Number of rounds in the game
    int currentRound;              // Current round number

public:
    using PlayerPtrVector = std::vector<Player*>;

    // Constructor for the Game class
    Game(const PlayerPtrVector& players, int r);

    // Function to play a round of the game
    void playRound();

    // Function to show the final results of the game
    void showResults();

    // Function to simulate the computer's shot choice (2-point or 3-point)
    int computerShotChoice() const;

    // Getter function to retrieve the current round number
    int getCurrentRound() const { return currentRound; }

    // Getter function to retrieve the total number of rounds
    int getRounds() const { return rounds; }
};

#endif
