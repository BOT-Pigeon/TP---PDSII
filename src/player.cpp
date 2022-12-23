#include "player.h"
#include "exceptions.h"

Player::Player(string nome){ 
    _nome = nome;
    _qtd_pokemons = 0;
}

Player::Player(string nome, vector<Pokemon> pokemons){
    _nome = nome;
    _lista_pokemons = pokemons;
    _qtd_pokemons = _lista_pokemons.size();
}

string Player::get_nome(){
    return _nome;
}

void Player::set_pokemon(Pokemon pokemon){
    _lista_pokemons.push_back(pokemon);
    _qtd_pokemons++;
}

Pokemon Player::get_pokemon(int indice){
    if(indice < 0 || indice > (_qtd_pokemons)){
        throw IndicePokemonException();
    }
    return _lista_pokemons[indice - 1];
}

int Player::get_qtd_pokemons(){
    return _qtd_pokemons;
}
