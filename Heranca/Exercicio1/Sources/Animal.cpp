#include "../Headers/Animal.hpp"

std::string Animal::getNome(){
    return this->nome;
}

int Animal::getIdade(){
    return this->idade;
}


void Animal::setIdade(int idade){
    this->idade = idade;
}

void Animal::setNome(std::string nome){
    this->nome = nome;
}
