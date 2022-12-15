#include <iostream>
#include <string>

#include "Player.h"
#include "Pokémon.h"
#include "Arena.h"

using namespace std;

int main(){ 




Player Cria_player(string nome, int pokemon, vector<Pokemon> Todos_pokemons){
    switch(pokemon){
        case 1:
            vector<Pokemon> Lista_pokemons;
            Lista_pokemons.push_back(Todos_pokemons[0]);
            return Player(nome,Lista_pokemons);
            break;
        case 2:
            vector<Pokemon> Lista_pokemons;
            Lista_pokemons.push_back(Todos_pokemons[1]);
            return Player(nome,Lista_pokemons);
            break;
        case 3:
            vector<Pokemon> Lista_pokemons;
            Lista_pokemons.push_back(Todos_pokemons[2]);
            return Player(nome,Lista_pokemons);
            break;
        case 4:
            vector<Pokemon> Lista_pokemons;
            Lista_pokemons.push_back(Todos_pokemons[3]);
            return Player(nome,Lista_pokemons);
            break;
        case 5:
            vector<Pokemon> Lista_pokemons;
            Lista_pokemons.push_back(Todos_pokemons[4]);
            return Player(nome,Lista_pokemons);
            break;
        case 6:
            vector<Pokemon> Lista_pokemons;
            Lista_pokemons.push_back(Todos_pokemons[5]);
            return Player(nome,Lista_pokemons);
            break;
        case 7:
            vector<Pokemon> Lista_pokemons;
            Lista_pokemons.push_back(Todos_pokemons[6]);
            return Player(nome,Lista_pokemons);
            break;
        case 8:
            vector<Pokemon> Lista_pokemons;
            Lista_pokemons.push_back(Todos_pokemons[7]);
            return Player(nome,Lista_pokemons);
            break;
        case 9:
            vector<Pokemon> Lista_pokemons;
            Lista_pokemons.push_back(Todos_pokemons[8]);
            return Player(nome,Lista_pokemons);
            break;
    }

}




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
vector<Pokemon> Lista_todos_pokemons;
//Pokemons tipo neve
Lista_todos_pokemons.push_back(Pokemon("Nevasca",Ataque("Nevasca",      10),Ataque("Nevasca",     6),Ataque("Nevasca",      3),80,"neve"));
Lista_todos_pokemons.push_back(Pokemon("Rei_Gelado",Ataque("Rei_Gelado",   15),Ataque("Rei_Gelado",   8),Ataque("Rei_Gelado",   5),46,"neve"));
Lista_todos_pokemons.push_back(Pokemon("Mandaloriano",Ataque("Mandaloriano", 20),Ataque("Mandaloriano", 14),Ataque("Mandaloriano", 8),32,"neve"));

//Pokemons tipo fogo
Lista_todos_pokemons.push_back(Pokemon("Esquentadinho",Ataque("Esquentadinho", 8),Ataque("Esquentadinho", 6),Ataque("Esquentadinho", 2),76,"fogo"));
Lista_todos_pokemons.push_back(Pokemon("Charizard",Ataque("Charizard"    , 17),Ataque("Charizard"    , 7),Ataque("Charizard"    , 4),52,"fogo"));
Lista_todos_pokemons.push_back(Pokemon("Monark",Ataque("Monark"       , 19),Ataque("Monark"       , 13),Ataque("Monark"       , 10),29,"fogo"));

//Pokemons tipo agua
Lista_todos_pokemons.push_back(Pokemon("Zé_Gotinha",Ataque("Zé_Gotinha", 9),Ataque("Zé_Gotinha", 7),Ataque("Zé_Gotinha", 3),77,"agua"));
Lista_todos_pokemons.push_back(Pokemon("Kratos",Ataque("Kratos",     13),Ataque("Kratos",     9),Ataque("Kratos",     5),48,"agua"));
Lista_todos_pokemons.push_back(Pokemon("Mbappe",Ataque("Mbappe",     29),Ataque("Mbappe",     20),Ataque("Mbappe",     15),25,"agua"));


vector<Pokemon> Lista_pokemons1;
vector<Pokemon> Lista_pokemons2;

int Poke1Escolhido, Poke2Escolhido;

 
cout <<  NomePlay1 <<" selecione seu pokemon" <<endl;
cin >> Poke1Escolhido ;
Player player1 = Cria_player(NomePlay1, Poke1escolhido, Lista_todos_pokemons);

cout <<  NomePlay2 <<" selecione seu pokemon" <<endl;
cin >> Poke1Escolhido ;
cout << endl ;
Player player2 = Cria_player(NomePlay2, Poke2escolhido, Lista_todos_pokemons);

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
