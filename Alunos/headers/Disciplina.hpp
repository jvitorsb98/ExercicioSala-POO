#ifndef DISCIPLINA_HPP
#define DISCIPLINA_HPP

#include<iostream>
#include<vector>

#include "Aluno.hpp"
#include "Professor.hpp"

class Disciplina{

    //atributos

    private:
        static int NumeroDeIds;
        int id;
        std::string nome;

    public:
        std::vector<Aluno> listaAlunos;
        Professor professor;

    public:
        int getId();
        std::string getNome();
        void setNome(std::string nome);
        void setId(int id);
        Disciplina(std::string nome);
        Disciplina();
        void mostraDados();

    private:
        static int getNumeroDeIds();
        static void setNumeroDeIds(int NumeroDeIds);
        static void incrementaId();


};


#endif