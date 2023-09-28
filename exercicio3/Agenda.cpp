#include "Agenda.hpp"

void Agenda::armazenaPessoa(const std::string &nome,const int &idade, const float &altura ){
    Pessoa pessoa(nome,idade,altura);
    for(auto it=povo.begin() ; it!=povo.end() ; it++){
        if(it->getNome() == nome){
            return;
        }
    }
    povo.push_back(pessoa);
}

void Agenda::removePessoa(const std::string &nome){
    for(auto it=povo.begin() ; it!=povo.end() ; it++){
        if(it->getNome() == nome){
            povo.erase(it);
            return;
        }
    }
}

void Agenda::imprimePovo(){
    for(auto it=povo.begin() ; it!=povo.end() ; it++){
        std::cout << "Nome : " << it->getNome() << " Idade : " << it->getIdade() << " Altura : " << it->getAltura() << std::endl;
    }
}

int Agenda::buscaPessoa(const std::string  &nome){
    int posicao=0;
    for(auto it=povo.begin() ; it!=povo.end() ; it++, posicao++){
        if(it->getNome() == nome){
            return posicao;
        }
    }
}

void Agenda::imprimePessoa(int posicao){
    std::cout << "Nome : " << povo.at(posicao).getNome() << " Idade : " << povo.at(posicao).getIdade() << " Altura : " << povo.at(posicao).getAltura() << std::endl;
}

