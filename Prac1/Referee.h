#ifndef REFEREE_H
#define REFEREE_H

#include "Player.h"
#include <string>

// class defenition for referee 
class Referee{
    public: 
        Referee(); 
        Player * winner;
        Player * refGame(Player * player1, Player * player2);
};

#endif 
