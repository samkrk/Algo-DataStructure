#ifndef HUMAN_H
#define HUMAN_H

#include "Player.h"
#include <string>

// class defenition for human 
class Human : public Player {
public:
    Human();
    Human(std::string n , char m);

    char makeMove(); // Pure virtual function for making a move
};

#endif 
