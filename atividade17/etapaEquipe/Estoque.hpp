#ifndef ESTOQUE_HPP
#define ESTOQUE_HPP

class Estoque{
    
    private:
        int quantidade;
    public:
        Estoque(int quantidade);
        bool verificaEstoque(int retirada);
        void insereProdutoNoEstoque(int quantidadeAInserir);
        int getEstoque();
        void retiraProdutoEstoque(int quantidadeARetirar);
};

#endif