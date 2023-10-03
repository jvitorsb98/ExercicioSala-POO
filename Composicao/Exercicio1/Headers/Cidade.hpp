#ifndef CIDADE_HPP
#define CIDADE_HPP

#include<iostream>
#include "Estado.hpp"

class Cidade{

    private:
        std::string nome;
        Estado *estado;

    public:
        void setNome(std::string nome);
        std::string getNome();
        Estado* getEstado();
        void setEstado(Estado* estado);

};



#endif