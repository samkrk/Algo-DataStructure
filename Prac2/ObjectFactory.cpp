#include "ObjectFactory.h"
ObjectFactory::ObjectFactory(){}

Move* ObjectFactory::createMove(std::string move){
    if (move == "Rock"){
        return new Rock;}
    else if (move == "Paper")
        return new Paper;
    else if (move == "Scissors")
        return new Scissors;
    else if (move == "Monkey")
        return new Monkey;
    else if (move == "Ninja")
        return new Ninja;
    else if (move == "Robot")
        return new Robot;
    else if (move == "Zombie")
        return new Zombie;
    else if (move == "Pirate")
        return new Pirate;
    else
        return new Zombie;
}

