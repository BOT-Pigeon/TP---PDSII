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

    int Jogarnovamente;
    
    cout << "-----------------------------------" << endl;
    cout << "           INICIO DO JOGO          " << endl;
    cout << "-----------------------------------" << endl;
    cout << endl;
    cout << endl;

    REFAZ:Arena batalha = Arena();    
    batalha.players_escolhem_pokemon();
    // Após os Player escolherem seus Pokemons, o jogo se inicia
    cout << endl;
    cout << "INICIO DA BATALHA" << endl;    
    cout << endl;
    
    batalha.game();

    cout << "FIM DO JOGO" << endl;
    
    cout << "Caso desejar, digite 1 para jogar novamente" << endl;

    cin >> Jogarnovamente;
    
    if(Jogarnovamente==1){
        
        goto REFAZ;
        
    }
    
    return 0;
}