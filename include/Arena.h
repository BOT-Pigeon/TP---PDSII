#ifndef ARENA_H
#define ARENA_H

#include <vector>
#include "Player.h"

class Arena{
    private:
        Player Player1;
        Player Player2;
    public:
        Arena(Player* player1, Player* player2);
        int balanceamento_por_elemento(const char* elemento1,const char* elemento2);
        bool ganhou(int vida1,int vida2);
        string ataque(Pokemon atacado, int danificado);
        void game();
};

#endif