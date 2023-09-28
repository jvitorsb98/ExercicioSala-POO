#include<iostream>

class Pessoa{

    private:
        std::string nome;
        float altura;
        int idade;
    public:
        Pessoa(const std::string &nome, const int &idade,const float &altura);
        std::string getNome();
        float getAltura();
        int getIdade();


};