#ifndef ESTADO_HPP
#define ESTADO_HPP

#include<iostream>
#include<vector>

class Estado{

    private:
        std::string nome;
        std::string sigla;

    public:
        void setNome(std::string nome);
        void setSigla(std::string sigla);
        std::string getNome();
        std::string getSigla();
        void preencheEstado();
        // std::vector<Cidade> getCidades();

};




#endif