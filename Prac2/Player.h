// Player.h
#ifndef PLAYER_H
#define PLAYER_H

#include <string>
#include <iostream>
#include "Move.h"
#include "ObjectFactory.h"

class Player {
private:
    Move* move; // Represents the move chosen by the player
    std::string name;
public:
    // Constructor
    Player(){};

    // Destructor
    virtual ~Player() {
        delete move; // Ensure proper memory management
    }

    // Pure virtual function for making a move
    virtual Move* makeMove() = 0;

    // Getter for player's name
    std::string getName();
    void setName(std::string n);

    std::string getMoveName();
    Move* getMove();

    void setMove(std::string m);
};

#endif
