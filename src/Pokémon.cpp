#include "../include/Pokémon.h"

Pokemon::Pokemon(string nome, Ataque ataque1, Ataque ataque2, Ataque ataque3, int vida, const char* elemento){
    _nome = nome;
    ataques.push_back(ataque1);
    ataques.push_back(ataque2);
    ataques.push_back(ataque3);
    _vida = vida;
    _elemento = elemento;
}

string Pokemon::get_nome(){
    return _nome;
}

vector<Ataque> Pokemon::get_ataques(){
    return ataques;
}

int Pokemon::get_vida(){
    return _vida;
}

const char* Pokemon::get_elemento(){
    return _elemento;
}

bool Pokemon::desviou(int dano){
    random_device semente;
    mt19937 mt(semente());
    uniform_int_distribution<int> dist(0,99);
    if (dist(mt)<=(int)((dano*100)/30)){
        return 1;
    }else{
        return 0;
    }
}

void Pokemon::set_vida(int dano){
    _vida -= dano;
}
