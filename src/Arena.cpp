#include "Arena.h"
#include <cstring>


Arena::Arena(Player player1, Player player2){
    players.push_back(player1);
    players.push_back(player2);
}




int Arena::balanceamento_por_elemento(Player1.get_pokemon(1)._get_elemento, Player2.get_pokemon(1)._get_elemento){

// neve ganha de agua // agua ganha de fogo // fogo ganha de neve
// se a função retorna 0 , ninguem tem vantagem ; se retorna 1 , player 1 tem vantagem , se retorna 2 , player 2 tem vantagem 

int comparavel = 0;
int compneve = 0;
int compfogo = 0;
int compagua = 0;

char elemento1[5];
char elemento2[5];

strcpy(elemento1,Player1.get_pokemon(1)._get_elemento);
strcpy(elemento2,Player2.get_pokemon(1)._get_elemento);

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
} else { 
    
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
}




bool Arena::ganhou(_vida){

if(_vida <= 0)
return true;


}







string Arena::ataque(Pokemon agressor, Pokemon atacado, int ataque_usado){

}







void Arena::game(){
//Jogo acontece aqui;
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

    Cria uma variavel que alterna entre os players , pode ser feito usando if (i%2==0){
        se i for par é um player
        se i for impar é outro


    }


        */

int i = 0;

while(Arena::ganhou != true){


int desviar = 0; 


cout << player1_nome << endl;
cout << Player1.get_pokemon(1).get_nome() << "Vida: " <<  Player1.get_pokemon(1).get_vida() << endl;

cout << player2_nome << endl;
cout << Player2.get_pokemon(1).get_nome() << "Vida: " <<  Player2.get_pokemon(2).get_vida() << endl;

cout << "Agora é a vez de " ;

if(i%2==0){

cout << player1_nome << endl;
cout << "Escolha o ataque a ser usado :" <<endl;
cout << Player1.get_pokemon(1).ataque1._nome "-" Player1.get_pokemon(1).ataque1._dano <<"de dano"<< "|";
cout << Player1.get_pokemon(1).ataque2._nome "-" Player1.get_pokemon(1).ataque2._dano <<"de dano"<< "|";
cout << Player1.get_pokemon(1).ataque3._nome "-" Player1.get_pokemon(1).ataque3._dano <<"de dano"<< endl;

cin >> ataque_usado;
desviar = desviou(ataque_usado);

if(desviar==1){
cout << "O " << Player.get_pokemon(1).get_nome() << " do jogador "<< player2_nome <<" desviou!" << endl;
} else {
ataque(agressor ,atacado ,ataque_usado);
cout << "O " << Player2.get_pokemon(1).get_nome() << " do jogador "<< player2_nome <<" recebeu" << "" << " de dano"<< endl;
}

} 

else {

cout << player2_nome << endl;
cout << "Escolha o ataque a ser usado :" <<endl;
cout << Player2.get_pokemon(1).ataque1._nome "-" Player2.get_pokemon(1).ataque1._dano <<"de dano"<< "|";
cout << Player2.get_pokemon(1).ataque2._nome "-" Player2.get_pokemon(1).ataque2._dano <<"de dano"<< "|";
cout << Player2.get_pokemon(1).ataque3._nome "-" Player2.get_pokemon(1).ataque3._dano <<"de dano"<< endl;

cin >> ataque_usado;
desviar = desviou(ataque_usado);

if(desviar==1){
cout << "O " << Player1.get_pokemon(1).get_nome() << " do jogador "<< player1_nome <<" desviou!" << endl;
} else {
ataque(agressor ,atacado ,ataque_usado);    
cout << "O " << Player1.get_pokemon(1).get_nome() << " do jogador "<< player1_nome <<" recebeu" << "" << " de dano"<< endl;
}

}





ganhou(_vida);
i++;
}




}
