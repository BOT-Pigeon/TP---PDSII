#ifndef POKEMON_H
#define POKEMON_H

#include <vector>
using namespace std;

class Pokemon{
    private:
        string _nome;
        vector<int> ataques;
        int _vida;
        string _elemento;
    public:
        Pokemon(string nome, int ataque1, int ataque2, int ataque3, int vida, string elemento);
        int get_ataque();
        int get_vida();
        string get_elemento();
        void decremento_ataque(float decremento);
        void incremento_ataque(float incremento);
        string receber_ataque(int dano);//Criar método para desvio ou ja implementar aqui.
        
};

#endif