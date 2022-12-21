#include "doctest.h"
#include "pokemon.h"
#include "ataque.h"

TEST_CASE("Testando a Classe Pokemon"){
    vector<Ataque> lista_ataques;
    Ataque ataque_1("Ataque_1", 50);
    Ataque ataque_2("Ataque_2", 75);
    Ataque ataque_3("Ataque_3", 100);
    lista_ataques.push_back(ataque_1);
    lista_ataques.push_back(ataque_2);
    lista_ataques.push_back(ataque_3);
    
    // Testando Construtor
    Pokemon pokemon("Pokemon_1",lista_ataques, 1000, "GELO");
    // Testando get_nome
    CHECK_EQ("Pokemon_1", pokemon.get_nome());

    // Testando get_ataque
    CHECK_EQ("Ataque_1", pokemon.get_ataque(0).get_nome());
    
    // Testando get_vida
    CHECK_EQ(1000, pokemon.get_vida());
    
    // Testando get_elemento
    CHECK_EQ("GELO", pokemon.get_elemento());

}
        
