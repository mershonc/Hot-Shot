# Hot-Shot
Hot Shot is a basketball shoot-out simulation game written in C++, demonstrating advanced concepts of object-oriented programming, such as objects, classes, inheritance, and polymorphism. 


ELEC 3150 – Object-Oriented Programming
FINAL PROJECT

 
A Game by: Carson Mershon


Hot Shot is a basketball shoot-out simulation game written in C++, demonstrating advanced concepts of object-oriented programming, such as objects, classes, inheritance, and polymorphism. Each of these OOP principles is on display in game's design and functionality, showcasing their practical uses in building a fun user interactive chance-based game. The following sections will detail how each OOP concept is incorporated into the project, highlighting the architecture and design choices that contribute to the game.

In this project, classes are the core of the game, representing entities with specific attributes and behaviors. The Game class, for instance, contains the entire game's logic, such as managing rounds and keeping score. The Player class represents the players with basic game functionalities with the default chances. These classes, when instantiated, create objects that interact within the game, showcasing how object-oriented programming can organize and manage modular systems.

This project also uses inheritance, a fundamental OOP concept, to create a hierarchy of classes. The NBAPlayer class extends the Player class. This means that NBAPlayer inherits all properties and methods of Player, but also introduces additional attributes and behaviors unique to an NBA player. This approach shows how inheritance is used to create specialized subclasses from a general base class, promoting code reusability and logical structure.

Polymorphism in this project is prominently displayed in the interaction between the Player and NBAPlayer classes. It allows objects of the NBAPlayer class to be treated as objects of their superclass, Player. This enables the game to handle these objects in a generalized way while still allowing for specific behaviors and attributes of NBAPlayer to be utilized. This aspect of polymorphism is crucial for writing flexible and easily maintainable code, as it allows for the creation of more generic code that can handle a variety of objects derived from a common superclass.

The gameplay of this basketball shootout simulation game is designed to offer an engaging and competitive simple experience, which is user interactive and chance-based so there is a little bit of strategy involved. In each round, all players will take turns to make shots, with the objective of accumulating the highest score at the end of 5 rounds. The types of users is categorized into two classes, Players and NBAPlayers. Players which includes the human player, are able to decide if they want to shoot a 2-point or 3-point shot with the chances of making the basket at a 60% and 40% respectively. The NBAPlayers will have the same options with the chances of making a 2-point shot is 70%, and 3-point shot is 50% comparatively. 

At the start of the game the user will be displayed the introduction and will be prompted to enter a name for their player. 
 

	After the user enters their name, the menu is displayed. The user is prompted to make a choice from these three options. This indicates the beginning of an interactive session with the game application.
 
	
	If the user selected option 1, the following Game Rules tab would be displayed, and it will ask the user to enter a new menu number.
 

	If the user selects option 2, it will display the list of the current players in the game lineup, including their created player.
 

	When the user selects option 3, the game will be started. Initiating the user to choose their shot, their options are either a 2-point shot or a 3-point shot, each with their respective chances of making and missing detailed in the Game Rules Menu. 
 

The user will then select which option they prefer and then the round will commence detailing what all of the players selected for their shot option, then will show underneath if that player makes or misses their shot.
 

	This process will repeat for 5 rounds, displaying the updated statistics after every round. Once all the five rounds are completed, the program will then display the current scores at the end of the round, and highlight the winner and will display their final points again. 
 

	In the event of a tie, both users will be displayed as winners, and will both be celebrated. Once the winners are announced the game will be over and the program will now end.

	The Code will be provided below, I put extensive details using in-line comments on most sections of the code to help with a better understanding of what the code does and its expected actions.


Main.cpp: 
 
 
The main.cpp file initializes the game environment, including players and rounds, and provides a menu interface for the user to interact with the game, displaying rules, showing players, and starting the game. It manages the game flow and user input to provide the gameplay experience.

Game.cpp:
 
 
The Game.cpp file contains the implementation details of the Game class, handling the gameplay logic. This includes managing rounds, processing players' shot choices, updating scores, and declaring the game's winner. It also includes functions to simulate computer players' shot choices and to display the final results, emphasizing the interactive and competitive aspects of the game.

Game.h:
 
The Game.h file defines the Game class with member variables to store player objects and track rounds. It includes methods to play rounds, show results, and simulate computer shot choices, along with constructors and getters for the current and total number of rounds.

Player.cpp:
 
The Player.cpp file defines the functions for the `Player` class, including a constructor to initialize player names and scores, a `shoot` function to simulate the chance of scoring based on shot type, and methods to retrieve the player's name and update their score after each round.

Player.h:
 
The `Player.h` file declares the `Player` class with essential attributes like name and score. It defines a constructor, a virtual function `shoot` for simulating shots with polymorphic behavior, a `getName` method to access the player's name, and functions to retrieve and update the player's score. This header file sets the groundwork for creating player objects with basic functionalities in the game.

NBAPlayer.cpp:
 
The `NBAPlayer.cpp` file provides the implementation of the `NBAPlayer` class, extending the `Player` class. It includes an overridden `shoot` function with a tailored success rate for different shot types and an overridden `getName` function to return the player's name. Additionally, there's a function to update the player's score after each round.

NBAPlayer.h:
 
The `NBAPlayer.h` file outlines the `NBAPlayer` class, which inherits from the `Player` class, demonstrating inheritance. It declares an overridden `shoot` function specific to NBA players, an overridden `getName` method, and a method to update the player's score, showcasing specialized behavior in the derived class.

The objective of creating a fully functional and interactive basketball game was successfully met. The game, as designed, not only functions really well but also provides an engaging user experience. The satisfaction with the final product is a great display of the code and the design that went into its development. The completion of this project underscores the ability to conceptualize, design, and ultimately create a fun little basketball game using object-oriented programming principles taught in this class. 
