#ifndef PLAYER_H
#define PLAYER_H

#include <string>
#include "Pokémon.h"


class Player{
    private:
        string _nome;
        int _qnt_vitorias;
        vector<Pokemon> lista_pokemons;
        int _qtd_pokemons;
    public:
        Player();
        Player(string nome, vector<Pokemon> pokemons);
        string get_nome();
        Pokemon get_pokemon(int indice);
        int get_qnt_vitorias();
        int get_qtd_pokemons();
};
#endif
