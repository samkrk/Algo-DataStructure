// Player.cpp
#include "Player.h"

std::string Player::getName() {
    return name;
}

void Player::setName(std::string n){
    name = n;
}

std::string Player::getMoveName(){
    return move->getName();
}

Move* Player::getMove(){
    return move;
}

void Player::setMove(std::string m){
    ObjectFactory factory;
    move = factory.createMove(m);
}