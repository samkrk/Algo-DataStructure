#ifndef OBJECTFACTORY 
#define OBJECTFACTORY

#include "Rock.h"
#include "Paper.h"
#include "Scissors.h"
#include "Robot.h"
#include "Ninja.h"
#include "Zombie.h"
#include "Pirate.h"
#include "Monkey.h"

class ObjectFactory {

public:
    ObjectFactory();
    Move* createMove(std::string move);
};

#endif

