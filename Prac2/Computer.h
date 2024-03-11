#ifndef COMPUTER_H
#define COMPUTER_H

#include "Player.h"
#include <string>

// class defenition for computer 
class Computer : public Player {
public:
    Computer();
    Move* makeMove(); // Pure virtual function for making a move
    
};

#endif 
