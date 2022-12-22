#ifndef EXCECOES_H
#define EXCECOES_H
#include <exception>

class OpcaoInvalidaException: public std::exception{
    const char* what() const throw(){
        return "Opção escolhida inválida!";
    }
};

class IndicePokemonException: public std::exception{
    const char* what() const throw(){
        return "Não existe nenhum pokemon correspondente a esse índice";
    }
};

class NumeroMaximoPlayersException: public std::exception{
    const char* what() const throw(){
        return "Número de jogadores por arena já está no máximo.";
    }
};

class PlayerNaoEncontradoException: public std::exception{
    const char* what() const throw(){
        return "Jogador não pertence a arena.";
    }
};

#endif
