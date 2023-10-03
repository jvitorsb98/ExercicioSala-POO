#ifndef CIDADE_HPP
#define CIDADE_HPP

#include<iostream>

class Cidade{

    private:
        std::string nome;

    public:
        void setNome(std::string nome);
        std::string getNome();

};



#endif