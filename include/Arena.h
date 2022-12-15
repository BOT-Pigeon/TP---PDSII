#ifndef ARENA_H
#define ARENA_H

#include <vector>
#include "Player.h"

class Arena{
    private:
        vector<Player> players;
    public:
        Arena(Player player1, Player player2);
        int balanceamento_por_elemento();
        bool ganhou();
        string ataque(Pokemon agressor, Pokemon atacado, int danificado);
        void game();
};

#endif