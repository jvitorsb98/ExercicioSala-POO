#ifndef ITEM_BIBLIOTECA_HPP
#define ITEM_BIBLIOTECA_HPP

#include<iostream>

class ItemBiblioteca{

    protected:
        std::string titulo;
        std::string nomeAuthor;
        int quantidadeDisponivel;


    public:
        ItemBiblioteca();
        ItemBiblioteca(std::string titulo, std::string nomeAuthor , int quantidadeDisponivel);
        std::string getTitulo();
        std::string getNomeAuthor();
        int getQuantidadeDisponivel();
        void setTitulo(std::string titulo);
        void setNomeAuthor(std::string nomeAuthor);
        void setQuantidadeDisponivel(int quantidadeDisponivel);
};

#endif
