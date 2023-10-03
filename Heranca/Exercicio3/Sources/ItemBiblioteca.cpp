#include "../Headers/ItemBiblioteca.hpp"


ItemBiblioteca::ItemBiblioteca(std::string titulo, std::string nomeAuthor , int quantidadeDisponivel) : 
titulo(titulo),nomeAuthor(nomeAuthor) , quantidadeDisponivel(quantidadeDisponivel){

}

ItemBiblioteca::ItemBiblioteca(){

}

void ItemBiblioteca::setTitulo(std::string titulo){
    this->titulo = titulo;
}

void ItemBiblioteca::setNomeAuthor(std::string nomeAuthor){
    this->nomeAuthor = nomeAuthor;
}

void ItemBiblioteca::setQuantidadeDisponivel(int quantidade){
    this->quantidadeDisponivel = quantidade;
}

std::string ItemBiblioteca::getTitulo(){
    return this->titulo;
}

std::string ItemBiblioteca::getNomeAuthor(){
    return this->nomeAuthor;
}

int ItemBiblioteca::getQuantidadeDisponivel(){
    return this->quantidadeDisponivel;
}