#include "Move.h"

// constructors 
Move::Move(){}
Move::Move(std::string name){moveName = name;}

// getters and setters 
std::string Move::getName(){
    return moveName;
}

void Move::setName(std::string n){
    moveName = n;
}

// functions
int Move::win(std::string oppMove){
    for (const auto& elem : beatsList) {
            if (elem == oppMove) {
                return 1; // win
            }
        }
    for (const auto& elem : losesToList) {
            if (elem == oppMove) {
                return 0; // lose
            }
        }
    
    return 2; // tie 
}

void Move::addBeats(const std::string& move) {
        beatsList.push_back(move);
    }

void Move::addLoses(const std::string& move) {
        losesToList.push_back(move);
    }