#ifndef ITEM_CARRINHO_HPP
#define ITEM_CARRINHO_HPP

#include "Produto.hpp"

class ItemCarrinho {
private:
    Produto produto;
    int quantidade;

public:
    ItemCarrinho(Produto produto, int quantidade) : produto(produto), quantidade(quantidade) {}

    Produto getProduto();

    int getQuantidade();

    double calcularSubtotal();

    void alteraQuantidade(int quantidade);
};

#endif