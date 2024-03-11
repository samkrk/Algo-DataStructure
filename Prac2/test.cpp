#include "Referee.h"
#include "Human.h"

int main(void){
    Referee ref;

    Human* Sam = new Human("Sam");
    Human* Max = new Human("Max");

    ref.refGame(Sam,Max);

    return 0;
}