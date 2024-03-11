#include "Referee.h"

Referee::Referee(){
    Tie = new Human("Tie");
}

Player* Referee::refGame(Player* player1, Player* player2){
    Move* move1 = player1->makeMove();
    Move* move2 = player2->makeMove();
    
    // std::cout << player1->getName() << "played" << player1->getMoveName() << std::endl;
    // std::cout << player2->getName() << "played" << player2->getMoveName() << std::endl;
    
    // std::cout << move1->win(move2->getName()) << std::endl;
    int result = move1->win(move2->getName());
    if (result == 1){
        return player1;
    }
    else if (result == 0){
        return player2;
    }

    
    return Tie;
}