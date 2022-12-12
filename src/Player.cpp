#include "Player.h"

Player::Player(string nome, string nome_pokemon, int dano_ataque1, int dano_ataque2, int dano_ataque3, int vida, string elemento):Pokemon(nome_pokemon, dano_ataque1, dano_ataque2, dano_ataque3, vida, elemento){
    _nome = nome;
    _qnt_vitorias = 0;
}

string Player::get_nome(){
    return _nome;
}

int Player::get_qnt_vitorias(){
    return _qnt_vitorias;
}
