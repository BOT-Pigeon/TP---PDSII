#ifndef ATAQUE_H
#define ATAQUE_H

#include <string>

using namespace std;

class Ataque{
    private:
        string _nome;
        int _dano;
    public:
        Ataque(string nome, int dano);
        string get_nome();
        int get_dano();
};

#endif