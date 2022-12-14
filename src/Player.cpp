#include "Player.h"

Player::Player(string nome, vector<Pokemon> pokemons){
    _nome = nome;
    lista_pokemons = pokemons;
    _qnt_vitorias = 0;
    _qtd_pokemons = lista_pokemons.size();
}

string Player::get_nome(){
    return _nome;
}

int Player::get_qnt_vitorias(){
    return _qnt_vitorias;
}

Pokemon Player::get_pokemon(int indice){
    return lista_pokemons[indice];
}

int Player::get_qtd_pokemons(){
    return _qtd_pokemons;
}
