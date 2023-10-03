#include "../Headers/Estado.hpp"

std::string Estado::getNome(){
    return this->nome;
}

std::string Estado::getSigla(){
    return this->sigla;
} 

void Estado::setNome(std::string nome){
    this->nome = nome;
}

void Estado::setSigla(std::string sigla){
    this->sigla = sigla;
}

void Estado::preencheEstado(){
    std::string nome,sigla;
    std::cout << "Insira o nome : ";
    getline(std::cin,nome);
    std::cout << "Insira a sigla : " ;
    getline(std::cin,sigla);
    setNome(nome);
    setSigla(sigla);
}

// std::vector<Cidade> Estado::getCidades(){
//     return this->cidades;
// }

