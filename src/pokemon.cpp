#include "pokemon.h"
#include "exceptions.h"

Pokemon::Pokemon(string nome, vector<Ataque> ataques, int vida, const char* elemento){
    _nome = nome;
    _vida = vida;
    _elemento = elemento;
    copy(ataques.begin(), ataques.end(), back_inserter(_ataques));
}

string Pokemon::get_nome(){
    return _nome;
}

Ataque Pokemon::get_ataque(int num_ataque){
    if(num_ataque <= 0 || num_ataque > get_quantidade_ataques()){
        throw OpcaoInvalidaException();
    }
    return _ataques[num_ataque -1];
}

int Pokemon::get_vida(){
    return _vida;
}

int Pokemon::get_quantidade_ataques(){
    return _ataques.size();
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

void Pokemon::recebe_dano(int dano){
    _vida -= dano;
}

void Pokemon::exibe_ataques(){
    int cont = 0;
    cout << "Lista de Ataques:" << endl;
    for(Ataque ataque: _ataques){
        cont++;
        cout << "Ataque " << cont << " || " <<  "Dano: " << ataque.get_dano() << endl;
    }
}