#ifndef POKEMON_H
#define POKEMON_H

#include <iostream>
#include <vector>
#include <random>
#include "ataque.h"
#include <string>

using namespace std;

class Pokemon{
    private:
        string _nome;
        vector<Ataque> _ataques;
        int _vida;
        const char* _elemento;
    public:
        Pokemon(string nome, vector<Ataque> ataques, int vida, const char* elemento);
        string get_nome();
        Ataque get_ataque(int num_ataque);
        int get_vida();
        int get_quantidade_ataques();
        const char* get_elemento();
        bool desviou(int dano);
        void recebe_dano(int dano);
        void exibe_ataques();
};

#endif
