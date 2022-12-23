#include <iostream>
#include <cstring>

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
    cout << "-----------------------------------" << endl;
    cout << "           INICIO DO JOGO          " << endl;
    cout << "-----------------------------------" << endl;
    cout << endl;
    cout << endl;

    int jogar = 1; 
    while(jogar == 1){
        Arena batalha = Arena();    
        batalha.players_escolhem_pokemon();
        // Após os Player escolherem seus Pokemons, o jogo se inicia
        cout << endl;
        cout << "---------------------------------------------------------------------------------------------------" << endl;
        cout << "INICIO DA BATALHA" << endl; 
        cout << "---------------------------------------------------------------------------------------------------" << endl;      
        
        batalha.game();

        cout << "FIM DO JOGO" << endl;
        jogar = 0;
        cout << "Caso desejar, digite 1 para jogar novamente" << endl;
        cin >> jogar;
    }
    
    return 0;
}