#include "Human.h"
#include <iostream>

Human::Human(){ name = "Human";}

Human::Human(std::string n , char m){
    name = n;
    move = m;
}

char Human::makeMove(){
        std::cout << "Enter move:";
        std::cin >> move;
        return move;
    }