#ifndef ELEVADOR_HPP
#define ELEVADOR_HPP

#include<iostream>

class Elevador{
    //Atributos
    private:
        int cargaMaxima;
        int cargaAtual;
        int numAndares;
        int andarAtual;
    //Métodos
    public:
        Elevador(int cargaMaxima, int numAndares);
        void entraPessoa();
        void saiPessoa();
        void sobeAndar();
        void desceAndar();

        void setAndarAtual(int andarAtual);
        void setCargaAtual(int cargaAtual);

        int getCargaMaxima();
        int getCargaAtual();
        int getNumAndares();
        int getAndarAtual();

    private:

};

#endif