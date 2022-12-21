#ifndef ARENA_H
#define ARENA_H

#include <vector>
#include "player.h"

class Arena{
    private:
        Player _player1;
        Player _player2;
    public:
        Arena(Player player1_, Player player2_);
        int balanceamento_por_elemento(const char* elemento1, const char* elemento2);
        bool ganhou(int vida1,int vida2);
        void ataque(Pokemon atacado, int danificado);
        void game();
};

#endif
