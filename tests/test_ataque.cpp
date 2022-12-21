#include "doctest.h"
#include "ataque.h"

TEST_CASE("Testando o Construtor"){
    Ataque ataque("Ataque de Teste", 30);
}

Ataque ataque("Ataque de Teste", 30);
TEST_CASE("Testando o get_nome"){
    CHECK_EQ("Ataque de Teste", ataque.get_nome());
}

TEST_CASE("Testando o get_nome"){
    CHECK_EQ(30, ataque.get_dano());
}
