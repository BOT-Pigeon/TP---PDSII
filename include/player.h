#ifndef PLAYER_H
#define PLAYER_H

#include <string>
#include "pokemon.h"


class Player{
    private:
        string _nome;
        int _qnt_vitorias;
        vector<Pokemon> _lista_pokemons;
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
