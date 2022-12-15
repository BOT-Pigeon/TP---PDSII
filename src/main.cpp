#include <iostream>
#include <string>

#include "Player.h"
#include "Pokémon.h"
#include "Arena.h"

using namespace std;

int main(){ 




/*Player Cria_pokemon(string nome, int pokemon){
    switch(pokemon){
        case 1:
            return Player(nome,"juca", 10, 6, 3, 45, "Água");
            break;
        case 2:
            return Player(nome, "Messi", 7, 4, 1, 50, "Água");
            break;
        case 3:
            return Player(nome, "Roland", 4, 2, 1, 75, "Água");
            break;
        case 4:
            return Player(nome, "Maguinho", 10, 7, 2, 45, "Fogo");
            break;
        case 5:
            return Player(nome, "Geno", 6, 5, 2, 68, "Fogo");
            break;
        case 6:
            return Player(nome, "Junin", 4, 3, 3, 87, "Fogo");
            break;
        case 7:
            return Player(nome, "Kuririn", 10, 4, 1, 49, "Neve");
            break;
        case 8:
            return Player(nome, "NNN", 4, 3 ,2, 99, "Neve");
            break;
        case 9:
            return Player(nome, "ABC", 10, 8, 6, 21, "Neve");
            break;
    }

}


*/

char NomePlay1[50];
char NomePlay2[50];


cout << "Começa o jogo" << endl;
cout << endl;

cout << "Qual o nome do primeiro jogador ?" << endl;
cin >> NomePlay1;
cout << endl;




cout << "Qual o nome do segundo jogador ?" << endl;
cin >> NomePlay2;
cout << endl;






cout << "Lista de Pokemons disponíveis :" << endl ;

//Pokemons tipo neve
Pokemon pokemon = Pokemon("Nevasca",Ataque("Nevasca",      10),Ataque("Nevasca",     6),Ataque("Nevasca",      3),80,"neve");
Pokemon pokemon = Pokemon("Rei_Gelado",Ataque("Rei_Gelado",   15),Ataque("Rei_Gelado",   8),Ataque("Rei_Gelado",   5),46,"neve");
Pokemon pokemon = Pokemon("Mandaloriano",Ataque("Mandaloriano", 20),Ataque("Mandaloriano", 14),Ataque("Mandaloriano", 8),32,"neve");

//Pokemons tipo fogo
Pokemon pokemon = Pokemon("Esquentadinho",Ataque("Esquentadinho", 8),Ataque("Esquentadinho", 6),Ataque("Esquentadinho", 2),76,"fogo");
Pokemon pokemon = Pokemon("Charizard",Ataque("Charizard"    , 17),Ataque("Charizard"    , 7),Ataque("Charizard"    , 4),52,"fogo");
Pokemon pokemon = Pokemon("Monark",Ataque("Monark"       , 19),Ataque("Monark"       , 13),Ataque("Monark"       , 10),29,"fogo");

//Pokemons tipo agua
Pokemon pokemon = Pokemon("Zé_Gotinha",Ataque("Zé_Gotinha", 9),Ataque("Zé_Gotinha", 7),Ataque("Zé_Gotinha", 3),77,"agua");
Pokemon pokemon = Pokemon("Kratos",Ataque("Kratos",     13),Ataque("Kratos",     9),Ataque("Kratos",     5),48,"agua");
Pokemon pokemon = Pokemon("Mbappe",Ataque("Mbappe",     29),Ataque("Mbappe",     20),Ataque("Mbappe",     15),25,"agua");


vector<Pokemon> Lista_pokemons1;
vector<Pokemon> Lista_pokemons2;



 
cout <<  NomePlay1 <<" selecione seu pokemon" <<endl;
cin >> Poke1Escolhido ;

cout <<  NomePlay2 <<" selecione seu pokemon" <<endl;
cin >> Poke1Escolhido ;
cout << endl ;


/*/

    string comeco;
    cin >> comeco;

    int Player1_pokemon, Player2_pokemon;
    string Player1_nome, Player2_nome;
    
    cout << "Qual será o nome do player 1?" << endl;
    cin >> Player1_nome;
    cout << "Seleção de personagens\nPlayer 1:\n1 - Pokemon 1 | Ataque: X | Vida: Y | Elemento: Z\n2 - Pokemon 2 | Ataque: X | Vida: Y | Elemento: Z\n3 - Pokemon 3 | Ataque: X | Vida: Y | Elemento: Z\n4 - Pokemon 4 | Ataque: X | Vida: Y | Elemento: Z\n5 - Pokemon 5 | Ataque: X | Vida: Y | Elemento: Z\n6 - Pokemon 6 | Ataque: X | Vida: Y | Elemento: Z\n7 - Pokemon 7 | Ataque: X | Vida: Y | Elemento: Z\n8 - Pokemon 8 | Ataque: X | Vida: Y | Elemento: Z\n9 - Pokemon 9 | Ataque: X | Vida: Y | Elemento: Z" << endl;
    Player Player1 = Cria_pokemon(Player1_nome, Player1_pokemon);

    cout << "Qual será o nome do player 2?" << endl;
    cin >> Player2_nome;
    cout << "Seleção de personagens\nPlayer 1:\n1 - Pokemon 1 | Ataque: X | Vida: Y | Elemento: Z\n2 - Pokemon 2 | Ataque: X | Vida: Y | Elemento: Z\n3 - Pokemon 3 | Ataque: X | Vida: Y | Elemento: Z\n4 - Pokemon 4 | Ataque: X | Vida: Y | Elemento: Z\n5 - Pokemon 5 | Ataque: X | Vida: Y | Elemento: Z\n6 - Pokemon 6 | Ataque: X | Vida: Y | Elemento: Z\n7 - Pokemon 7 | Ataque: X | Vida: Y | Elemento: Z\n8 - Pokemon 8 | Ataque: X | Vida: Y | Elemento: Z\n9 - Pokemon 9 | Ataque: X | Vida: Y | Elemento: Z" << endl;
    Player Player2 = Cria_pokemon(Player2_nome, Player2_pokemon);

    Arena Batalha = Arena (Player1, Player2);
    Batalha.game();
*/
    return 0;
}
