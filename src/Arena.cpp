#include "Arena.h"

Arena::Arena(Player player1, Player player2){
    players.push_back(player1);
    players.push_back(player2);
}







void Arena::balanceamento_por_elemento(){

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
cout <<              << "Vida: " <<     << endl;

cout << player2_nome << endl;
cout <<              << "Vida: " <<     << endl;

cout << "Agora é a vez de " ;

if(i%2==0){

cout << player1_nome << endl;
cout << "Escolha o ataque a ser usado :" <<endl;
cout << ataque1._nome "-" ataque1._dano <<"de dano"<< "|";
cout << ataque2._nome "-" ataque2._dano <<"de dano"<< "|";
cout << ataque3._nome "-" ataque3._dano <<"de dano"<< endl;

cin >> ataque_usado;
desviar = desviou(ataque_usado);

if(desviar==1){
cout << "O " << "" << " do jogador "<< player2_nome <<" desviou!" << endl;
} else {
ataque(agressor ,atacado ,ataque_usado);
cout << "O " << "" << " do jogador "<< player2_nome <<" recebeu" << "" << " de dano"<< endl;
}



} 

else {

cout << player2_nome << endl;
cout << "Escolha o ataque a ser usado :" <<endl;
cout << ataque1._nome "-" ataque1._dano <<"de dano"<< "|";
cout << ataque2._nome "-" ataque2._dano <<"de dano"<< "|";
cout << ataque3._nome "-" ataque3._dano <<"de dano"<< endl;

cin >> ataque_usado;
desviar = desviou(ataque_usado);

if(desviar==1){
cout << "O " << "" << " do jogador "<< player1_nome <<" desviou!" << endl;
} else {
ataque(agressor ,atacado ,ataque_usado);    
cout << "O " << "" << " do jogador "<< player1_nome <<" recebeu" << "" << " de dano"<< endl;
}

}





ganhou(_vida);
i++;
}




}
