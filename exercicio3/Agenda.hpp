#include "Pessoa.hpp"
#include<vector>

class Agenda{
    std::vector<Pessoa> povo;

    public:
        
        void armazenaPessoa(const std::string &nome,const int &idade, const float &altura );
        void removePessoa(const std::string &nome);
        void imprimePovo();
        int buscaPessoa(const std::string  &nome);
        void imprimePessoa(int posicao);

};