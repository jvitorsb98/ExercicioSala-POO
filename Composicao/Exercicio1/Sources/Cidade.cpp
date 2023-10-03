#include "../Headers/Cidade.hpp"

std::string Cidade::getNome(){
    return this->nome;
}

void Cidade::setNome(std::string nome){
    this->nome = nome;
}

Estado* Cidade::getEstado(){
    return this->estado;
}

void Cidade::setEstado(Estado* estado){
    this->estado = estado;
}
