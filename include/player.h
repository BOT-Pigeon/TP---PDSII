#ifndef PLAYER_H
#define PLAYER_H

#include <string>
#include "pokemon.h"


class Player{
    private:
        string _nome;
        vector<Pokemon> _lista_pokemons;
        int _qtd_pokemons;
    public:
        Player(string nome);
        Player(string nome, vector<Pokemon> pokemons);
        void set_pokemon(Pokemon pokemon);
        string get_nome();
        Pokemon get_pokemon(int indice);
        int get_qtd_pokemons();
};
#endif
