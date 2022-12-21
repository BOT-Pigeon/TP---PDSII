#include "player.h"

Player::Player(){    
}

Player::Player(string nome, vector<Pokemon> pokemons){
    _nome = nome;
    _lista_pokemons = pokemons;
    _qnt_vitorias = 0;
    _qtd_pokemons = _lista_pokemons.size();
}

string Player::get_nome(){
    return _nome;
}

int Player::get_qnt_vitorias(){
    return _qnt_vitorias;
}

Pokemon Player::get_pokemon(int indice){
    return _lista_pokemons[indice];
}

int Player::get_qtd_pokemons(){
    return _qtd_pokemons;
}
