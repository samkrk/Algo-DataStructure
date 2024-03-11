#ifndef HUMAN_H
#define HUMAN_H

#include "Player.h"

// class defenition for human 
class Human : public Player {
public:
    Human();
    Human(std::string playerName);
    Move* makeMove(); 
};

#endif 
