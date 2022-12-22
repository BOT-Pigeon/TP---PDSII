#ifndef ARENA_H
#define ARENA_H

#include <vector>
#include "player.h"

class Arena{
    private:
        vector<Player> _players;
        const int QTD_MAX_PLAYERS = 2;
        int _qtd_players = 0;
        int _qtd_pokemons_disponiveis = 0;
        vector<Pokemon> _lista_pokemons;
    public:
        Arena();
        Player get_player(int index_player);
        void set_player(Player player);
        void inicializa_pokemons();
        void exibe_pokemons_disponiveis();
        void players_escolhem_pokemon();
        int balanceamento_por_elemento(const char* elemento1, const char* elemento2);
        bool ganhou(int vida1, int vida2);
        void ataque(Pokemon atacado, int danificado);
        void game();
};

#endif
