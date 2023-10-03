#ifndef ALUNO_HPP
#define ALUNO_HPP

#include<iostream>

class Aluno{


    private: // atributos
        int id;
        std::string nome;
        double notas[4];
        double media;

    public: 
        static int NumeroDeIds;

        int getId();
        std::string getNome();
        void setNome(std::string nome);
        Aluno(std::string nome);
        void mostraDados();
        void setNotas(int prova, double nota);
        Aluno();
        void setId(int id);
        double getNotas(int prova);
        void setMedia(double media);
        double getMedia();

    private: 
        static int getNumeroDeIds();
        static void setNumeroDeIds(int NumeroDeIds);
        static void incrementaId();



};




#endif