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

    
    cout << "-----------------------------------" << endl;
    cout << "           INICIO DO JOGO          " << endl;
    cout << "-----------------------------------" << endl;
    cout << endl;

    Arena batalha = Arena();    
    batalha.players_escolhem_pokemon();
    // Após os Player escolherem seus Pokemons, o jogo se inicia
    cout << "INICIO DA BATALHA" << endl;    
    batalha.game();

    cout << "FIM DO JOGO" << endl;
    return 0;
}
