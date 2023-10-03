#ifndef PROFESSOR_HPP
#define PROFESSOR_HPP

#include<iostream>

class Professor{

    private:
        static int NumeroDeIds;
        int id;
        std::string nome;

    public:
        int getId();
        std::string getNome();
        void setNome(std::string nome);
        Professor(std::string nome);
        void mostraDados();
        Professor(); 
        void setId(int id);


    private:
        static int getNumeroDeIds();
        static void setNumeroDeIds(int NumeroDeIds);
        static void incrementaId();


};


#endif