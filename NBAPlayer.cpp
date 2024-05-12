#include "NBAPlayer.h"
#include <cstdlib>

// Constructor for NBAPlayer class, initializes with "NBA " prefix and sets the player's name
NBAPlayer::NBAPlayer(const std::string& n) : Player("NBA " + n) {}

// Overridden shoot function for NBAPlayer, calculates success rate based on shot type
int NBAPlayer::shoot(int shotType) {
    int successRate = (shotType == 2) ? 70 : 50;
    return (rand() % 100 < successRate) ? shotType : 0;
}

// Overridden getName function for NBAPlayer, returns the player's name
std::string NBAPlayer::getName() const {
    return name;
}

// Function to update the player's score based on points scored in a round
void NBAPlayer::updateScore(int points) {
    score += points;
}
