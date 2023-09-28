#include "Produto.hpp"

string Produto::getNome(){
    return this->nome;
}

string Produto::getCodigo(){
    return this->codigo;
}

double Produto::getPreco(){
    return this->preco;
}

void Produto::setNome(string nome){
    this->nome = nome;
}

void Produto::setCodigo(string codigo){
    this->codigo = codigo;
}

void Produto::setPreco(double preco){
    this->preco = preco;
}
