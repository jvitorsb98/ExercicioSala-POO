#include "../headers/Disciplina.hpp"

int Disciplina::NumeroDeIds = 0 ;

int Disciplina::getId(){
    return this->id;
}

void Disciplina::setId(int id){
    this->id = id;
}

void Disciplina::mostraDados(){
    std::cout << "------------Disciplina " << getId() << "------------" << std::endl;
    std::cout <<"Nome : " << getNome() << std::endl;
    std::cout << "-----Professor-----" <<std::endl;
    professor.mostraDados();
    std::cout << "-----Alunos-----" <<std::endl;
    for(auto it=listaAlunos.begin() ; it!=listaAlunos.end() ; it++){
        it->mostraDados();
    }
}

std::string Disciplina::getNome(){
    return this->nome;
}

void Disciplina::setNome(std::string nome){
    this->nome = nome;
}

int Disciplina::getNumeroDeIds(){
    return Disciplina::NumeroDeIds;
}

void Disciplina::setNumeroDeIds(int NumeroDeIds){
    Disciplina::NumeroDeIds = NumeroDeIds;
}

void Disciplina::incrementaId(){
    Disciplina::setNumeroDeIds(getNumeroDeIds()+1);
}

Disciplina::Disciplina(std::string nome){
    incrementaId();
    setNome(nome);
    setId(Disciplina::getNumeroDeIds());
}

Disciplina::Disciplina(){

}
