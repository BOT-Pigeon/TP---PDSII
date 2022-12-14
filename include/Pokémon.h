#ifndef POKEMON_H
#define POKEMON_H

#include <iostream>
#include <vector>
#include <random>
#include "Ataque.h"

using namespace std;

class Pokemon{
    private:
        string _nome;
        vector<Ataque> ataques;
        int _vida;
        string _elemento;
    public:
        Pokemon(string nome, Ataque ataque1, Ataque ataque2, Ataque ataque3, int vida, string elemento);
        vector<Ataque> get_ataques();
        int get_vida();
        string get_elemento();
        bool desviou(int dano);
        void receber_ataque(int dano);
        void set_vida(int dano);
};

#endif
