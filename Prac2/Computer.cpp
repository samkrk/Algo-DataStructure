#include "Computer.h"

Computer::Computer(){ 
    setName("Computer"); 
    setMove("Rock");
    
}

Move* Computer::makeMove(){
        return getMove();
    }