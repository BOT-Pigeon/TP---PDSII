#include "Pokémon.h"

Pokemon::Pokemon(string nome, int ataque1, int ataque2, int ataque3, int vida, string elemento){
    _nome = nome;
    ataques.push_back(ataque1);
    ataques.push_back(ataque2);
    ataques.push_back(ataque3);
    _vida = vida;
    _elemento = elemento;
}

int Pokemon::get_ataque1(){
    return ataques[0];
}

int Pokemon::get_ataque2(){
    return ataques[1];
}

int Pokemon::get_ataque3(){
    return ataques[2];
}

int Pokemon::get_vida(){
    return _vida;
}

string Pokemon::get_elemento(){
    return _elemento;
}

void Pokemon::decremento_ataque(float decremento){
    auto it = ataques.begin();
    for(it; it!=ataques.end(); it++){
        *it*=(1-decremento);
    }
}

void Pokemon::incremento_ataque(float incremento){
   auto it = ataques.begin();
    for(it; it!=ataques.end(); it++){
        *it*=(1+incremento);
    }
}

string Pokemon::receber_ataque(int dano){
    _vida-=dano;
}
