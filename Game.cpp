#include "Game.h"
#include <iostream>
#include <cstdlib>

using std::cout;
using std::cin;
using std::vector;

// Constructor for the Game class
Game::Game(const vector<Player*>& players, int r)
    : players(players), rounds(r), currentRound(0) {}

// Function to play a round of the game
void Game::playRound() {
    cout << "\n---- Begin! ----\n";  // Display the start of a new round

    // Human player's turn
    int shotChoice;
    do {
        cout << players[0]->getName() << ", choose your shot (2 for 2-point, 3 for 3-point): ";
        cin >> shotChoice;  // Prompt the human player to choose a shot type
        if (shotChoice != 2 && shotChoice != 3) {
            cout << "Invalid choice. Please enter 2 for a 2-point shot or 3 for a 3-point shot." << std::endl;
        }
    } while (shotChoice != 2 && shotChoice != 3);

    int pointsScored = players[0]->shoot(shotChoice);  // Calculate points scored by the human player
    players[0]->updateScore(pointsScored);  // Update the human player's score based on points scored
    cout << players[0]->getName() << (pointsScored > 0 ? " makes" : " misses") << " a " << shotChoice << "-point shot." << std::endl;  // Display the result of the human player's shot

    // Computer players' turns
    for (size_t i = 1; i < players.size(); ++i) {
        shotChoice = computerShotChoice();  // Determine the computer player's shot choice
        cout << players[i]->getName() << " chooses a " << (shotChoice == 2 ? "2-point" : "3-point") << " shot." << std::endl;  // Display the computer player's shot choice
        pointsScored = players[i]->shoot(shotChoice);  // Calculate points scored by the computer player
        players[i]->updateScore(pointsScored);  // Update the computer player's score based on points scored
        cout << players[i]->getName() << (pointsScored > 0 ? " makes" : " misses") << " a " << shotChoice << "-point shot." << std::endl;  // Display the result of the computer player's shot
    }

    cout << "\nEnd of round " << currentRound + 1 << ".\n";  // Display the end of the current round
    cout << "\n---- Current Scores: ----\n";
    for (auto& player : players) {
        cout << player->getName() << "'s score: " << player->getScore() << std::endl;  // Display the current scores of all players
    }
    currentRound++;  // Increment the current round counter
}


// Function to show the final results of the game
void Game::showResults() {
    //// Display a header for the final scores
    //cout << "\n---- Final Scores: ----" << std::endl;

    //// Iterate through all players and display their final scores
    //for (auto& player : players) {
    //    cout << player->getName() << "'s score: " << player->getScore() << std::endl;  // Display the final scores of all players
    //}

    // Determine the winners (players with the highest score)
    
    // Create a vector to store the winners (players with the highest score)
    vector<Player*> winners;

    // Initialize the maximum score with the score of the first player in the list
    int maxScore = players[0]->getScore();

    // Add the first player to the winners vector since they have the highest score so far
    winners.push_back(players[0]);

    // Loop through the remaining players to find the players with the highest score
    for (size_t i = 1; i < players.size(); ++i) {
        if (players[i]->getScore() > maxScore) {
            winners.clear();  // Clear the previous winners since a new highest score is found
            winners.push_back(players[i]);  // Add the new highest scoring player to the winners list
            maxScore = players[i]->getScore();  // Update the maximum score with the new highest score
        }
        else if (players[i]->getScore() == maxScore) {
            winners.push_back(players[i]);  // Add tied players to the winners list
        }
    }


    // Display the winners and their winning score
    cout << "\n---- Winners: ----\n";
    for (auto& winner : winners) {
        cout << winner->getName() << " with " << maxScore << " points!" << std::endl;  // Display the winners and their score
    }
}



// Function to simulate the computer's shot choice (2-point or 3-point)
int Game::computerShotChoice() const {
    return (rand() % 2 == 0) ? 2 : 3;
}