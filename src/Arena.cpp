#include "../include/Arena.h"
#include <cstring>

Arena::Arena(Player player1_, Player player2_){
    Player1 = player1_;
    Player2 = player2_;
}

int Arena::balanceamento_por_elemento(const char* elemento1,const char* elemento2){
    // neve ganha de agua // agua ganha de fogo // fogo ganha de neve
    // se a função retorna 0 , ninguem tem vantagem ; se retorna 1 , player 1 tem vantagem , se retorna 2 , player 2 tem vantagem 
    int comparavel = 0;
    int compneve = 0;
    int compfogo = 0;
    int compagua = 0;

    comparavel = strcmp(elemento1,elemento2);

    if(comparavel == 0){
        return 0;
    }

    //comparador para primeiro = fogo 
    compfogo = strcmp(elemento1,"fogo");

    if(compfogo == 0){    
        comparavel = strcmp(elemento1,elemento2);
        if(comparavel>0){
            return 2;
        }else { 
            return 1; 
        }
    }
    //comparador para primeiro = agua 
    compagua = strcmp(elemento1,"agua");

    if(compagua ==0){    
        comparavel = strcmp(elemento2,"fogo");
        if(comparavel==0){
            return 1;
        }
        return 2;
    }

    //comparador para primeiro = neve

    compneve = strcmp(elemento1,"neve");

    if(compneve ==0){
        comparavel = strcmp(elemento2,"fogo");
        if(comparavel==0){
            return 2;
        }
        return 1;
    }
    return -255;
}


// Ganhou recebe as vidas e compara se é maior que 0;

bool Arena::ganhou(int vida1,int vida2){
    if(vida1<=0){
        cout << "Jogador 2 é o vencedor" << endl; 
        return true;
    }

    if(vida2<=0){
        cout << "Jogador 1 é o vencedor" << endl; 
        return true;
    }

    return false;
}

void Arena::ataque(Pokemon atacado,int dano){
    atacado.set_vida(dano);
}

void Arena::game(){
    int i = 0;
    int vantagem;
    bool ganhar = false;
    vantagem = Arena::balanceamento_por_elemento(Player1.get_pokemon(1).get_elemento(), Player2.get_pokemon(1).get_elemento());

    while(ganhar != true){
        int desviar = 0;
        int ataque_usado = 0;
        int  danoso = 0; 


        cout << Player1.get_nome() << endl;
        cout << Player1.get_pokemon(1).get_nome() << "Vida: " <<  Player1.get_pokemon(1).get_vida() << endl;

        cout << Player2.get_nome() << endl;
        cout << Player2.get_pokemon(1).get_nome() << "Vida: " <<  Player2.get_pokemon(2).get_vida() << endl;

        cout << "Agora é a vez de " ;

        if(i % 2 == 0){
            cout << Player1.get_nome() << endl;
            cout << "Escolha o ataque a ser usado :" <<endl;
            cout << Player1.get_pokemon(1).get_ataques()[0].get_nome() << "-" << Player1.get_pokemon(1).get_ataques()[0].get_dano() <<"de dano"<< "|";
            cout << Player1.get_pokemon(1).get_ataques()[1].get_nome() << "-" << Player1.get_pokemon(1).get_ataques()[1].get_dano() <<"de dano"<< "|";
            cout << Player1.get_pokemon(1).get_ataques()[2].get_nome() << "-" << Player1.get_pokemon(1).get_ataques()[2].get_dano() <<"de dano"<< endl;

            cin >> ataque_usado ;

            if(ataque_usado==1){
                danoso = Player1.get_pokemon(1).get_ataques()[0].get_dano();
            }

            if(ataque_usado==2){
                danoso = Player1.get_pokemon(1).get_ataques()[1].get_dano();
            }

            if(ataque_usado==3){
                danoso = Player1.get_pokemon(1).get_ataques()[0].get_dano();
            }

            desviar = Player2.get_pokemon(0).desviou(danoso);
            if(desviar==1){
                cout << "O " << Player2.get_pokemon(1).get_nome() << " do jogador "<< Player2.get_nome() <<" desviou!" << endl;
            }
            else{
                if(vantagem==1){
                    danoso = danoso * 1.25;
                }
                ataque(Player2.get_pokemon(0) ,danoso);
                cout << "O " << Player2.get_pokemon(1).get_nome() << " do jogador "<< Player2.get_nome() <<" recebeu" << danoso << " de dano"<< endl;
            }
        }
        else{
            cout << Player2.get_nome() << endl;
            cout << "Escolha o ataque a ser usado :" <<endl;
            cout << Player2.get_pokemon(1).get_ataques()[0].get_nome() << "-" << Player2.get_pokemon(1).get_ataques()[0].get_dano() <<"de dano"<< "|";
            cout << Player2.get_pokemon(1).get_ataques()[1].get_nome() << "-" << Player2.get_pokemon(1).get_ataques()[1].get_dano() <<"de dano"<< "|";
            cout << Player2.get_pokemon(1).get_ataques()[2].get_nome() << "-" << Player2.get_pokemon(1).get_ataques()[2].get_dano() <<"de dano"<< endl;

            cin >> ataque_usado ;

            if(ataque_usado==1){
                danoso = Player2.get_pokemon(1).get_ataques()[0].get_dano();
            }

            if(ataque_usado==2){
                danoso = Player2.get_pokemon(1).get_ataques()[1].get_dano();
            }

            if(ataque_usado==3){
                danoso = Player2.get_pokemon(1).get_ataques()[2].get_dano();
            }

            desviar = Player1.get_pokemon(0).desviou(danoso);
            if(desviar==1){
                cout << "O " << Player1.get_pokemon(1).get_nome() << " do jogador "<< Player1.get_nome()<<" desviou!" << endl;
            }
            else{
                if(vantagem==2){
                    danoso = danoso * 1.25;
                }
                ataque(Player1.get_pokemon(0) ,danoso);
                cout << "O " << Player1.get_pokemon(1).get_nome() << " do jogador "<< Player1.get_nome() <<" recebeu" << danoso << " de dano"<< endl;
            }
        }

        ganhar = ganhou(Player1.get_pokemon(1).get_vida(),Player2.get_pokemon(1).get_vida());
        i++;
    }
}
