#include<iostream>

class Aluno{

    private:
        std::string nome;
        int id;
    public:
        Aluno(std::string nome, int id);
        void exibirDetalhes();

};