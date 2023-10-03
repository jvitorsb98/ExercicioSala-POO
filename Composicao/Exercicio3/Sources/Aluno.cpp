#include "../Headers/Aluno.hpp"

Aluno::Aluno(std::string nome , int id) : nome(nome) , id(id){

}

void Aluno::exibirDetalhes(){
    std::cout << this->nome << std::endl;
    std::cout << this->id << std::endl;

}