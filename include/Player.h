#ifndef PLAYER_H
#define PLAYER_H

#include <string>
#include "Pokémon.h"


class Player : public Pokemon {
    private:
        string _nome;
        int _qnt_vitorias;
    public:
        Player(string nome, string nome_pokemo, int dano_ataque1, int dano_ataque2, int dano_ataque3, int vida, string elemento);
        string get_nome();
        int get_qnt_vitorias();
};
#endif
