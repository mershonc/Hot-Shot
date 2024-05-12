#include "Game.h"
#include "Player.h"
#include "NBAPlayer.h"
#include <iostream>
#include <vector>
#include <string>
#include <cstdlib>
#include <ctime>

using std::cout;
using std::cin;
using std::vector;
using std::string;

// Function to display the game rules
void showRules() {
    cout << "\n---- Game Rules: ----\n";
    cout << "1. Choose between a 2-point shot or a 3-point shot.\n";
    cout << "2. A 2-point shot has a higher chance of scoring (60% for Player, 70% for NBAPlayer).\n";
    cout << "3. A 3-point shot has a lower chance of scoring (40% for Player, 50% for NBAPlayer).\n";
    cout << "4. The player with the most points after all rounds wins.\n\n";
}

// Function to display the names of all players
void showPlayers(const vector<Player*>& players) {
    cout << "\n---- Players: ----\n";
    for (const auto& player : players) {
        cout << player->getName() << "\n";
    }
    cout << "\n";
}

int main() {
    srand(static_cast<unsigned int>(time(nullptr))); // Seed the random number generator

    string playerName;
    cout << "    )              (                     \n";
    cout << " ( /(          )   )\\ )    )          )  \n";
    cout << " )\\())      ( /(  (()/( ( /(       ( /(  \n";
    cout << "((_)\\   (   )\\())  /(_)))\\())  (   )\\()) \n";
    cout << " _((_)  )\\ (_))/  (_)) ((_)\\   )\\ (_))/  \n";
    cout << "| || | ((_)| |_   / __|| |(_) ((_)| |_   \n";
    cout << "| __ |/ _ \\|  _|  \\__ \\| ' \\ / _ \\|  _|  \n";
    cout << "|_||_|\\___/ \\__|  |___/|_||_|\\___/ \\__|  \n";
    cout << "\nA Game by: Carson Mershon\n";
    cout << "\nEnter your name: ";
    getline(cin, playerName);

    //------------------------------------------OBJECT
    //Created instances
    Player humanPlayer(playerName);
    Player computerPlayer1("Bob");
    Player computerPlayer2("Alice");
    NBAPlayer nbaPlayer1("Player Kobe");
    NBAPlayer nbaPlayer2("Player Michael");

    vector<Player*> players = { &humanPlayer, &computerPlayer1, &computerPlayer2, &nbaPlayer1, &nbaPlayer2 };

    Game game(players, 5); // Set up the game with 5 rounds

    int choice;
    do {
        cout << "\n---- Menu ----\n";
        cout << "1. Show Game Rules\n";
        cout << "2. Show Players\n";
        cout << "3. Start Game\n";
        cout << "Enter your choice (1-3): ";
        cin >> choice;
        cin.ignore(); // Clear newline character from the input buffer

        switch (choice) {
        case 1:
            showRules(); // Display game rules
            break;
        case 2:
            showPlayers(players); // Display player names
            break;
        case 3:
            for (int i = 0; i < game.getRounds(); ++i) {
                game.playRound(); // Start the game and play rounds
            }
            game.showResults(); // Display final game results
            break;
        default:
            cout << "Invalid choice. Please enter a number between 1-3.\n";
        }
    } while (choice != 3);

    return 0;
}
