#include "../headers/Professor.hpp"

int Professor::NumeroDeIds = 0 ;

int Professor::getId(){
    return this->id;
}

void Professor::setId(int id){
    this->id = id;
}

std::string Professor::getNome(){
    return this->nome;
}

void Professor::setNome(std::string nome){
    this->nome = nome;
}

int Professor::getNumeroDeIds(){
    return Professor::NumeroDeIds;
}

void Professor::setNumeroDeIds(int NumeroDeIds){
    Professor::NumeroDeIds = NumeroDeIds;
}

void Professor::incrementaId(){
    Professor::setNumeroDeIds(getNumeroDeIds()+1);
}

Professor::Professor(std::string nome){
    Professor::incrementaId();
    this->setNome(nome);
    this->id = Professor::getNumeroDeIds();
}

Professor::Professor(){

}


void Professor::mostraDados(){
    std::cout << "Id : " <<  getId() << std::endl;
    std::cout << "Nome : " <<  getNome() << std::endl;

}

