#ifndef PRODUTO_HPP
#define PRODUTO_HPP

#include<iostream>
#include "Estoque.hpp"

using namespace std;

class Produto{

    static int numProdutos;

    private:
        string nome;
        int codigo;
        double preco;

    public:
        Estoque estoque;
        Produto(string nome, double preco);
        Produto(string nome, double preco , int quantidadeEstoque);
        string getNome();
        int getCodigo();
        double getPreco();

        void setNome(string nome);
        void setCodigo(int codigo);
        void setPreco(double preco);
        void imprimeProduto();

};


#endif
