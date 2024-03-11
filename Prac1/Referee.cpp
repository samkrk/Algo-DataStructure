#include "Referee.h"
#include <iostream>

Referee::Referee(){Player* winner;}

Player * Referee::refGame(Player * player1, Player * player2){
    char p1m = player1->makeMove();
    char p2m = player2->makeMove();

    if (p1m == 'R') {
        if (p2m == 'R'){return nullptr;}
        else if (p2m == 'P'){return player2;}
        else if (p2m == 'S'){return player1;}}
    else if (p1m == 'P') {
        if (p2m == 'P'){return nullptr;}
        else if (p2m == 'S'){return player2;}
        else if (p2m == 'R'){return player1;}}
    else if (p1m == 'S') {
        if (p2m == 'S'){return nullptr;}
        else if (p2m == 'R'){return player2;}
        else if (p2m == 'P'){return player1;}}

    return nullptr;
}