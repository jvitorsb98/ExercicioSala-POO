#include "../Headers/Filme.hpp"



Filme::Filme(std::string titulo, std::string nomeAuthor , int quantidadeDisponivel, int tempoHoras) :
ItemBiblioteca(titulo,nomeAuthor,quantidadeDisponivel),
tempoHoras(tempoHoras){

}


void Filme::setTempoHoras(int tempoHoras){
    this->tempoHoras = tempoHoras;
}

int Filme::getTempoHoras(){
    return this->tempoHoras;
}

void Filme::mostraFilme(){
    std::cout << "Titulo : " << this->getTitulo() << std::endl;
    std::cout << "Nome Author : " <<  this->getNomeAuthor() << std::endl;
    std::cout << "Tempo em horas : " <<  this->getTempoHoras() << std::endl;
    std::cout << "Quantidade Disponivel : " <<  this->getQuantidadeDisponivel() << std::endl;
}


