#ifndef NBA_PLAYER_H
#define NBA_PLAYER_H

#include "Player.h"
//------------------------------------------ INHERITANCE
// Declaration of the NBAPlayer class, which is derived from the base Player class
class NBAPlayer : public Player {
public:
    // Constructor for NBAPlayer, takes a name as input
    NBAPlayer(const std::string& n);

    // Overridden shoot function for NBAPlayer, calculates success rate based on shot type
    int shoot(int shotType) override;

    // Overridden getName function for NBAPlayer, returns the player's name
    std::string getName() const override;

    // Function to update the player's score based on points scored in a round

    void updateScore(int points);
};

#endif
