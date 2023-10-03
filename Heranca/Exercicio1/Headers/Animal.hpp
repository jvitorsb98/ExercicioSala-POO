#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include<iostream>

class Animal{

    std::string nome;
    int idade;


    public:
        std::string getNome();
        void setNome(std::string nome);
        int getIdade();
        void setIdade(int idade);
        virtual void fazerSom() =0;

};


#endif