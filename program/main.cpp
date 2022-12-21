#include <iostream>
#include <string>

#include "player.h"
#include "pokemon.h"
#include "arena.h"
#include "exceptions.h"
using namespace std;

Player cria_player(string nome, Pokemon pokemon){
    vector<Pokemon> lista_pokemons;
    lista_pokemons.push_back(pokemon);
    return Player(nome, lista_pokemons);
}

int main() { 
    string nome_player1;
    string nome_player2;

    cout << "-----------------------------------" << endl;
    cout << "           INICIO DO JOGO          " << endl;
    cout << "-----------------------------------" << endl;
    cout << endl;

    cout << "Insira o nome do primeiro jogador: " ;
    cin >> nome_player1;
    cout << endl;

    cout << "Insira o nome do segundo jogador: ";
    cin >> nome_player2;
    cout << endl;

    // Construcao dos Pokemons de cada elemento, alocando-os no vetor lista_todos_pokemons
    vector<Pokemon> lista_todos_pokemons;
    //Pokemons tipo neve
    lista_todos_pokemons.push_back(Pokemon("Nevasca", vector<Ataque>{Ataque("Nevasca",10), Ataque("Nevasca", 6), Ataque("Nevasca", 3)}, 80, "neve"));
    lista_todos_pokemons.push_back(Pokemon("Rei_Gelado", vector<Ataque>{Ataque("Rei_Gelado", 15), Ataque("Rei_Gelado", 8), Ataque("Rei_Gelado", 5)}, 46, "neve"));
    lista_todos_pokemons.push_back(Pokemon("Mandaloriano", vector<Ataque>{Ataque("Mandaloriano", 20), Ataque("Mandaloriano", 14), Ataque("Mandaloriano", 8)},32,"neve"));

    //Pokemons tipo fogo
    lista_todos_pokemons.push_back(Pokemon("Esquentadinho", vector<Ataque>{Ataque("Esquentadinho", 8),Ataque("Esquentadinho", 6),Ataque("Esquentadinho", 2)}, 76, "fogo"));
    lista_todos_pokemons.push_back(Pokemon("Charizard", vector<Ataque>{Ataque("Charizard", 17), Ataque("Charizard", 7), Ataque("Charizard", 4)}, 52, "fogo"));
    lista_todos_pokemons.push_back(Pokemon("Monark", vector<Ataque>{Ataque("Monark", 19), Ataque("Monark", 13), Ataque("Monark", 10)}, 29, "fogo"));

    //Pokemons tipo agua
    lista_todos_pokemons.push_back(Pokemon("Zé_Gotinha", vector<Ataque>{Ataque("Zé_Gotinha", 9),Ataque("Zé_Gotinha", 7),Ataque("Zé_Gotinha", 3)}, 77, "agua"));
    lista_todos_pokemons.push_back(Pokemon("Kratos", vector<Ataque>{Ataque("Kratos", 13),Ataque("Kratos", 9),Ataque("Kratos", 5)}, 48, "agua"));
    lista_todos_pokemons.push_back(Pokemon("Mbappe", vector<Ataque>{Ataque("Mbappe", 29),Ataque("Mbappe", 20),Ataque("Mbappe", 15)}, 25, "agua"));

    int pokemon_escolhido1, pokemon_escolhido2;

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

    cout <<  nome_player1 << " selecione seu pokemon: ";
    cin >> pokemon_escolhido1;
    if(pokemon_escolhido1 > 9 || pokemon_escolhido1 <= 0){
        throw OpcaoInvalidaException();
    }
    Player player1 = cria_player(nome_player1, lista_todos_pokemons[pokemon_escolhido1 - 1]);
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

    cout <<  nome_player2 << " selecione seu pokemon: ";
    cin >> pokemon_escolhido2 ;
    cout << endl ;
    
    if(pokemon_escolhido2 > 9 || pokemon_escolhido2 <= 0){
        throw OpcaoInvalidaException();
    }
    Player player2 = cria_player(nome_player2, lista_todos_pokemons[pokemon_escolhido2 - 1]);
    cout << "------------------------------------------------------------------------------------" << endl;

    // Após os Player escolherem seus Pokemons, o jogo se inicia
    cout << "INICIO DA BATALHA" << endl;
    Arena batalha = Arena(player1, player2);
    batalha.game();

    cout << "FIM DO JOGO" << endl;
    return 0;
}
