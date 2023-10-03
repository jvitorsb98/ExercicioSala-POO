#include "Produto.hpp"

Produto::Produto(string nome, double preco): nome(nome) , preco(preco), estoque(0){
    Produto::numProdutos++;
    setCodigo(Produto::numProdutos);
}

Produto::Produto(string nome, double preco, int quantidadeEstoque): nome(nome) , preco(preco) , estoque(quantidadeEstoque){
    Produto::numProdutos++;
    setCodigo(Produto::numProdutos);
}

string Produto::getNome(){
    return this->nome;
}

void Produto::imprimeProduto(){
    cout << "ID    : " << getCodigo() << endl;
    cout << "Nome  : " << getNome() << endl;
    cout << "Preco : " << getPreco() << endl << endl;
}

int Produto::getCodigo(){
    return this->codigo;
}

double Produto::getPreco(){
    return this->preco;
}

void Produto::setNome(string nome){
    this->nome = nome;
}

void Produto::setCodigo(int codigo){
    this->codigo = codigo;
}

void Produto::setPreco(double preco){
    this->preco = preco;
}
