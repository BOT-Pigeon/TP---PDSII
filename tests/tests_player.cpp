#include "doctest.h"
#include <vector>
#include "player.h"
#include "ataque.h"
#include "pokemon.h"
#include "exceptions.h"

// Utilizando técnica de A(Arrange)A(Act)(Assert) devido ao testes precisarem de elementos anteriores
// O ACT e o Assert são juntos no caso do doctest

TEST_CASE("Testando construtor do Player sem pokemons"){
    Player player("Player");
}

Player player("Player");
TEST_CASE("Testando get_nome"){   
    CHECK_EQ("Player",player.get_nome());
}

TEST_CASE("Testando get_pokemon"){
    CHECK_THROWS_AS(player.get_pokemon(1), IndicePokemonException);
}

TEST_CASE("Testando get_qnt_vitorias"){
    CHECK_EQ(0, player.get_qnt_vitorias());
}

TEST_CASE("Testando get_qtd_pokemons"){    
    CHECK_EQ(0, player.get_qtd_pokemons());
}

TEST_CASE("Testando metódos do Player"){
    // ARRANGE
    vector<Ataque> lista_ataques;
    Ataque ataque_1("Ataque_1", 50);
    Ataque ataque_2("Ataque_2", 75);
    Ataque ataque_3("Ataque_3", 100);
    lista_ataques.push_back(ataque_1);
    lista_ataques.push_back(ataque_2);
    lista_ataques.push_back(ataque_3);
    Pokemon pokemon_1("Pokemon_1", lista_ataques, 1000, "GELO");
    Pokemon pokemon_2("Pokemon_2", lista_ataques, 1000, "FOGO");
    vector<Pokemon> lista_pokemon;
    lista_pokemon.push_back(pokemon_1);
    lista_pokemon.push_back(pokemon_2);

    // Testando Construtor 
    Player player("Player", lista_pokemon);

    // Testando get_nome    
    CHECK_EQ("Player",player.get_nome());

    // Testando get_pokemon
    CHECK_EQ("Pokemon_1", player.get_pokemon(1).get_nome());

    // Testando get_qnt_vitorias
    CHECK_EQ(0, player.get_qnt_vitorias());
    
    // Testando get_qtd_pokemons
    CHECK_EQ(2, player.get_qtd_pokemons());
}
