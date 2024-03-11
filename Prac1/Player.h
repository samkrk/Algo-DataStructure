#ifndef PLAYER_H
#define PLAYER_H

#include <string>

// abstract class defenition for player 
class Player {
public:
    std::string name;
    char move;

    virtual char makeMove() = 0; // Pure virtual function for making a move
    std::string getName(); // Pure virtual function for getting player's name
};

#endif 
