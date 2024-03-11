#include "Human.h"

Human::Human(){setName("Human");}
Human::Human(std::string playerName){setName(playerName);}

Move* Human::makeMove(){
        std::string enteredMove;
        std::cin >> enteredMove;
        ObjectFactory factory;
        Move* m = factory.createMove(enteredMove);
        return m;
    };
