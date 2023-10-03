#include "ItemCarrinho.hpp"

Produto ItemCarrinho::getProduto(){
    return this->produto;
}

int ItemCarrinho::getQuantidade(){
    return this->quantidade;
}

double ItemCarrinho::calcularSubtotal() {
    return produto.getPreco() * quantidade;
}

void ItemCarrinho::alteraQuantidade(int quantidade){
    this->quantidade = quantidade;
}