#ifndef ARENA_H
#define ARENA_H

#include <vector>
#include "Player.h"

class Arena{
    private:
        vector<Player> players;
    public:
        Arena(Player player1, Player player2);
        void balanceamento_por_elemento();
        bool ganhou(_vida);
        string ataque(Pokemon agressor, Pokemon atacado, int ataque_usado);
        void game();//Jogo acontece aqui;
        /*Faz o balanceamento por elemento
        Entra num loop onde ocorrerá as rodadas de forma alternada entre os jogadores
        Será printado na tela

        *nome do player1*
            *nome do pokemon do player1* - Vida: Y
        *nome do player2*
            *nome do pokemon do player2* - Vida: Z        
        Agora é a vez de *nome do player* 
        Escolha o ataque do seu pokémon:
        1 - 5 de dano | 2 - 7 de dano | 3 - 10 de dano



        *nome do player1*
            *nome do pokemon do player1* - Vida: Y
        *nome do player2*
            *nome do pokemon do player2* - Vida: Z
        O *nome do pokemon do adersário* do jogador *nome do adversário* desviou!
                                    ou
        O *nome do pokemon do adersário* do jogador *nome do adversário* recebeu X de dano!

        */
};

#endif