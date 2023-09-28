#ifndef PRODUTO_HPP
#define PRODUTO_HPP
#include<iostream>

using namespace std;

class Produto{

    private:
        string nome;
        string codigo;
        double preco;


    public:
        string getNome();
        string getCodigo();
        double getPreco();

        void setNome(string nome);
        void setCodigo(string codigo);
        void setPreco(double preco);

};


#endif
