#include "../Headers/Livro.hpp"



Livro::Livro(std::string titulo, std::string nomeAuthor , int quantidadeDisponivel, int numPaginas) :
ItemBiblioteca(titulo,nomeAuthor,quantidadeDisponivel),
numPaginas(numPaginas){

}


void Livro::setNumPaginas(int numPaginas){
    this->numPaginas = numPaginas;
}

int Livro::getNumPaginas(){
    return this->numPaginas;
}

void Livro::mostraLivro(){
    std::cout << "Titulo : " << this->getTitulo() << std::endl;
    std::cout << "Nome Author : " << this->getNomeAuthor() << std::endl;
    std::cout << "Num Paginas : " << this->getNumPaginas() << std::endl;
    std::cout << "Quantidade Disponivel : " << this->getQuantidadeDisponivel() << std::endl;
}


