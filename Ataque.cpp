#include "Ataque.h"

Ataque::Ataque(string nome, int dano){
    _nome = nome;
    _dano = dano;
}

string Ataque::get_nome(){
    return _nome;
}

int Ataque::get_dano(){
    return _dano;
}