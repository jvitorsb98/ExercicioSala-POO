#include "Estoque.hpp"

Estoque::Estoque(int quantidade): quantidade(quantidade){

}

bool Estoque::verificaEstoque(int retirada){
    if(retirada>getEstoque()){
        return false;
    }else{
        return true;
    }
}

void Estoque::insereProdutoNoEstoque(int quantidadeAInserir){
    this->quantidade += quantidadeAInserir;
}

void Estoque::retiraProdutoEstoque(int quantidadeARetirar){
    this->quantidade -= quantidadeARetirar;
}

int Estoque::getEstoque(){
    return this->quantidade;
}


