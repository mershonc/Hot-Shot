#include "Player.h"
#include <cstdlib>

// Constructor to initialize Player object with a name and score of 0
Player::Player(const std::string& n) : name(n), score(0) {}

// Function to simulate a player's shot, returns the points scored (0, 1, 2, or 3)
int Player::shoot(int shotType) {
    int successRate = (shotType == 2) ? 60 : 40;  // Success rate for 2-point or 3-point shot
    return (rand() % 100 < successRate) ? shotType : 0;  // Randomly determine if the shot is successful
}

// Function to retrieve the player's name
std::string Player::getName() const {
    return name;
}

// Function to update the player's score based on points scored in a round
void Player::updateScore(int points) {
    score += points;
}
