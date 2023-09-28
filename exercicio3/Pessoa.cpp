#include "Pessoa.hpp"

Pessoa::Pessoa(const std::string &nome, const int &idade,  const float &altura): nome(nome), idade(idade), altura(altura){

}

std::string Pessoa::getNome(){
    return this->nome;
}

int Pessoa::getIdade(){
    return this->idade;
}

float Pessoa::getAltura(){
    return this->altura;
}