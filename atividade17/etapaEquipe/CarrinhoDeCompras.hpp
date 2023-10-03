#include<vector>
#include "Produto.hpp"
#include<iostream>
#include "ItemCarrinho.hpp"

using namespace std;

class CarrinhoDeCompras{

    private:
        vector<ItemCarrinho> itens;

    public:
        void adicionarProduto(Produto &produto , int quantidade);

        void removerProduto(Produto &produto, int quantidade);

        void esvaziarCarrinho();

        void exibirCarrinho();

        double calcularValorTotal();

        int getQuantidadeProduto(Produto produto);

};