#include <iostream>
#include <string>

#include "../include/Player.h"
#include "../include/Pokémon.h"
#include "../include/Arena.h"
using namespace std;

Player Cria_player(string nome, int pokemon, vector<Pokemon> Todos_pokemons){
    switch (pokemon) {
        case 1: {
            vector<Pokemon> Lista_pokemons;
            Lista_pokemons.push_back(Todos_pokemons[0]);
            return Player(nome,Lista_pokemons);
            break;
        }
        case 2: {
            vector<Pokemon> Lista_pokemons;
            Lista_pokemons.push_back(Todos_pokemons[1]);
            return Player(nome,Lista_pokemons);
            break;
        }
        case 3: {
            vector<Pokemon> Lista_pokemons;
            Lista_pokemons.push_back(Todos_pokemons[2]);
            return Player(nome,Lista_pokemons);
            break;
        }
        case 4: {
            vector<Pokemon> Lista_pokemons;
            Lista_pokemons.push_back(Todos_pokemons[3]);
            return Player(nome,Lista_pokemons);
            break;
        }
        case 5: {
            vector<Pokemon> Lista_pokemons;
            Lista_pokemons.push_back(Todos_pokemons[4]);
            return Player(nome,Lista_pokemons);
            break;
        }
        case 6: {
            vector<Pokemon> Lista_pokemons;
            Lista_pokemons.push_back(Todos_pokemons[5]);
            return Player(nome,Lista_pokemons);
            break;
        }
        case 7: {
            vector<Pokemon> Lista_pokemons;
            Lista_pokemons.push_back(Todos_pokemons[6]);
            return Player(nome,Lista_pokemons);
            break;
        }
        case 8: {
            vector<Pokemon> Lista_pokemons;
            Lista_pokemons.push_back(Todos_pokemons[7]);
            return Player(nome,Lista_pokemons);
            break;
        }
        case 9: {
            vector<Pokemon> Lista_pokemons;
            Lista_pokemons.push_back(Todos_pokemons[8]);
            return Player(nome,Lista_pokemons);
            break;
        }
    }
}

int main() { 
    string NomePlayer1;
    string NomePlayer2;

    cout << "-----------------------------------" << endl;
    cout << "           INICIO DO JOGO          " << endl;
    cout << "-----------------------------------" << endl;
    cout << endl;

    cout << "Insira o nome do primeiro jogador: " ;
    cin >> NomePlayer1;
    cout << endl;

    cout << "Insira o nome do segundo jogador: ";
    cin >> NomePlayer2;
    cout << endl;

    // Construcao dos Pokemons de cada elemento, alocando-os no vetor Lista_todos_pokemons
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

    cout << "Lista de Pokemons disponíveis :" << endl ;

    cout << "Pokemons do tipo Neve:" << endl;
    cout << "Pokemon 1| | Nome: Nevasca       | | Ataques: 10 6  3  | |Vida: 80| |Elemento: Neve " << endl;
    cout << "Pokemon 2| | Nome: Rei_Gelado    | | Ataques: 15 8  5  | |Vida: 46| |Elemento: Neve " << endl;
    cout << "Pokemon 3| | Nome: Mandaloriano  | | Ataques: 20 14 8  | |Vida: 32| |Elemento: Neve " << endl;
    cout << endl;

    cout << "Pokemons do tipo Fogo:" << endl;
    cout << "Pokemon 4| | Nome: Esquentadinho | | Ataques: 8  6  2  | |Vida: 76| |Elemento: Fogo " << endl;
    cout << "Pokemon 5| | Nome: Charizard     | | Ataques: 17 7  4  | |Vida: 52| |Elemento: Fogo " << endl;
    cout << "Pokemon 6| | Nome: Monark        | | Ataques: 19 13 10 | |Vida: 29| |Elemento: Fogo " << endl;
    cout << endl;

    cout << "Pokemons do tipo Agua:" << endl;
    cout << "Pokemon 7| | Nome: Zé_Gotinha    | | Ataques: 9  7  3  | |Vida: 77| |Elemento: Agua " << endl;
    cout << "Pokemon 8| | Nome: Kratos        | | Ataques: 13 9  5  | |Vida: 48| |Elemento: Agua " << endl;
    cout << "Pokemon 9| | Nome: Mbappe        | | Ataques: 29 20 15 | |Vida: 25| |Elemento: Agua " << endl;
    cout << endl;

    cout <<  NomePlayer1 << " selecione seu pokemon: ";
    cin >> Poke1Escolhido ;
    Player player1 = Cria_player(NomePlayer1, Poke1Escolhido, Lista_todos_pokemons);
    cout << "------------------------------------------------------------------------------------" << endl;

    cout << "Pokemons do tipo Neve:" << endl;
    cout << "Pokemon 1| | Nome: Nevasca       | | Ataques: 10 6  3  | |Vida: 80| |Elemento: Neve " << endl;
    cout << "Pokemon 2| | Nome: Rei_Gelado    | | Ataques: 15 8  5  | |Vida: 46| |Elemento: Neve " << endl;
    cout << "Pokemon 3| | Nome: Mandaloriano  | | Ataques: 20 14 8  | |Vida: 32| |Elemento: Neve " << endl;
    cout << endl;

    cout << "Pokemons do tipo Fogo:" << endl;
    cout << "Pokemon 4| | Nome: Esquentadinho | | Ataques: 8  6  2  | |Vida: 76| |Elemento: Fogo " << endl;
    cout << "Pokemon 5| | Nome: Charizard     | | Ataques: 17 7  4  | |Vida: 52| |Elemento: Fogo " << endl;
    cout << "Pokemon 6| | Nome: Monark        | | Ataques: 19 13 10 | |Vida: 29| |Elemento: Fogo " << endl;
    cout << endl;

    cout << "Pokemons do tipo Agua:" << endl;
    cout << "Pokemon 7| | Nome: Zé_Gotinha    | | Ataques: 9  7  3  | |Vida: 77| |Elemento: Agua " << endl;
    cout << "Pokemon 8| | Nome: Kratos        | | Ataques: 13 9  5  | |Vida: 48| |Elemento: Agua " << endl;
    cout << "Pokemon 9| | Nome: Mbappe        | | Ataques: 29 20 15 | |Vida: 25| |Elemento: Agua " << endl;
    cout << endl;

    cout <<  NomePlayer2 << " selecione seu pokemon: ";
    cin >> Poke2Escolhido ;

    cout << endl ;
    Player player2 = Cria_player(NomePlayer2, Poke2Escolhido, Lista_todos_pokemons);
    cout << "------------------------------------------------------------------------------------" << endl;

    // Após os Player escolherem seus Pokemons, o jogo se inicia
    cout << "INICIO DA BATALHA" << endl;

    Arena Batalha = Arena(player1, player2);
    Batalha.game();

    cout << "FIM DO JOGO" << endl;
    return 0;
}
