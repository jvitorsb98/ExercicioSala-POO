#include "CarrinhoDeCompras.hpp"
#include<iomanip>

int Produto::numProdutos = 0;

int main(){

    Produto p1("Maçã", 2.5);
    Produto p2("Arroz", 10.0);
    Produto p3("Leite", 4.0,4);
    CarrinhoDeCompras carrinho;

    
    p1.estoque.insereProdutoNoEstoque(25);
    p2.estoque.insereProdutoNoEstoque(25);
    p3.estoque.insereProdutoNoEstoque(25);
    p1.estoque.retiraProdutoEstoque(10);
    
    carrinho.adicionarProduto(p1, 3);
    carrinho.adicionarProduto(p2, 2);
    carrinho.adicionarProduto(p3, 1);
    double valorTotal = carrinho.calcularValorTotal();
    cout << "Valor total da compra: " << valorTotal << endl;
    // Resposta: Valor total da compra: 31.5

    carrinho.removerProduto(p2, 1);
    valorTotal = carrinho.calcularValorTotal();
    cout << "Valor total após remoção: " << valorTotal << endl;
    // Resposta: Valor total após remoção: 21.5

    carrinho.esvaziarCarrinho();
    valorTotal = carrinho.calcularValorTotal();
    cout << "Valor total após esvaziar o carrinho: " << fixed << setprecision(1) << valorTotal << endl;
    // Resposta: Valor total após esvaziar o carrinho: 0.0

    Produto p4("Chocolate", 3.0);
    p4.estoque.insereProdutoNoEstoque(5);
    // carrinho.ExibirCarrinho();
    // carrinho.adicionarProduto(p4, 10); // Supondo estoque limitado a 5 unidades
    // cout << "Quantidade de chocolates no carrinho: " << carrinho.getQuantidadeProduto(p4) << endl;
    // // Resposta: Quantidade de chocolates no carrinho: 5

    carrinho.adicionarProduto(p1, 2);
    carrinho.adicionarProduto(p2, 3);
    carrinho.adicionarProduto(p3, 1);
    carrinho.adicionarProduto(p4, 2);
    carrinho.exibirCarrinho();
    // Resposta: Carrinho de Compras:
    // - Maçã (2.5) x 2
    // - Arroz (10.0) x 3
    // - Leite (4.0) x 1
    // - Chocolate (3.0) x 2


    return 0;
}