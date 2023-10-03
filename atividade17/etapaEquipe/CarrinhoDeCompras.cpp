#include "CarrinhoDeCompras.hpp"

void CarrinhoDeCompras::adicionarProduto(Produto &produto , int quantidade){
        if(produto.estoque.verificaEstoque(quantidade)){
            produto.estoque.retiraProdutoEstoque(quantidade);
            ItemCarrinho item(produto,quantidade);
            this->itens.push_back(item);
        }else{
            int limite = produto.estoque.getEstoque();
            produto.estoque.retiraProdutoEstoque(limite);
            ItemCarrinho item(produto,limite);
            this->itens.push_back(item);
        }
}

void CarrinhoDeCompras::removerProduto(Produto &produto, int quantidade){

    produto.estoque.insereProdutoNoEstoque(quantidade);
    for(auto it=this->itens.begin() ; it!=this->itens.end() ; it++){
        if(it->getProduto().getCodigo() == produto.getCodigo()){
            if(quantidade < it->getQuantidade()){
                it->alteraQuantidade(it->getQuantidade()-quantidade);
                return;
            }else if(quantidade == it->getQuantidade()){
                this->itens.erase(it);
                return;
            }else{
                cout << "Erro" << endl;
                return;
            }
        }
    }
}

void CarrinhoDeCompras::esvaziarCarrinho(){
    itens.clear();
}

void CarrinhoDeCompras::exibirCarrinho(){
    for(auto it=this->itens.begin() ; it!=this->itens.end() ; it++){
        cout << "---------------------------------------" << endl;
        cout << "Produto : " << it->getProduto().getNome() << endl;
        cout << "Codigo  : " << it->getProduto().getCodigo() << endl;
        cout << "Preco unitario  : " << it->getProduto().getPreco() << endl;
        cout << "Quantidade :" << it->getQuantidade() << endl;
        cout << "Valor : " << it->calcularSubtotal() << endl;
        cout << "---------------------------------------" << endl;
    }
        cout << "---------------------------------------" << endl;
        cout << "Valor Final da compra : " << calcularValorTotal() << endl;
}

double CarrinhoDeCompras::calcularValorTotal(){

    double valorFinal=0.0;
    for(auto it=this->itens.begin() ; it!=this->itens.end() ; it++){
        valorFinal += it->calcularSubtotal();
    }
    
    return valorFinal;
}

int CarrinhoDeCompras::getQuantidadeProduto(Produto produto){
    
    for(auto it=this->itens.begin() ; it!=this->itens.end() ; it++){
        if(it->getProduto().getCodigo() == produto.getCodigo()){
            return it->getQuantidade();
        }
    }
    return 0;
}