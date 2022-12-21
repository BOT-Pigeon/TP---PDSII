#ifndef EXCECOES_H
#define EXCECOES_H
#include <exception>

class OpcaoInvalidaException: public std::exception{
    const char* what() const throw(){
        return "Opção escolhida inválida!";
    }
};

#endif
