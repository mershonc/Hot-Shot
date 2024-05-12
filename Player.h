#ifndef PLAYER_H
#define PLAYER_H

#include <string>

class Player {
protected:
    std::string name;
    int score;

public:
    // Constructor to initialize Player object with a name and score of 0
    Player(const std::string& n);

    // Virtual function to simulate a player's shot, returns the points scored (0, 1, 2, or 3) - Polymorphism
    virtual int shoot(int shotType);

    // Virtual function to retrieve the player's name - Polymorphism
    virtual std::string getName() const;

    // Function to retrieve the player's score
    int getScore() const { return score; }

    // Function to update the player's score based on points scored in a round
    void updateScore(int points);
};

#endif
