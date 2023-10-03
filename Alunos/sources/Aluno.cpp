#include "../headers/Aluno.hpp"

int Aluno::NumeroDeIds = 0 ;

int Aluno::getId(){
    return this->id;
}

void Aluno::setId(int id){
    this->id = id;
}

std::string Aluno::getNome(){
    return this->nome;
}

void Aluno::setNome(std::string nome){
    this->nome = nome;
}

Aluno::Aluno(){

}

void Aluno::setNotas(int prova, double nota){
    this->notas[prova] = nota;
}

double Aluno::getNotas(int prova){
    return this->notas[prova];
}

int Aluno::getNumeroDeIds(){
    return Aluno::NumeroDeIds;
}

void Aluno::setNumeroDeIds(int NumeroDeIds){
    Aluno::NumeroDeIds = NumeroDeIds;
}

void Aluno::incrementaId(){
    Aluno::setNumeroDeIds(getNumeroDeIds()+1);
}

Aluno::Aluno(std::string nome){
    Aluno::incrementaId();
    this->setNome(nome);
    this->id = Aluno::getNumeroDeIds();
}

void Aluno::mostraDados(){
    std::cout << "Id : " <<  getId() << std::endl;
    std::cout << "Nome : " <<  getNome() << std::endl;
    for(int i = 0 ; i < 4 ; i++){
        std::cout << "Nota[" << i+1 << "]" << " : " << getNotas(i) << std::endl;
    }
    std::cout << "Media : " << getMedia() << std::endl;

}

void Aluno::setMedia(double media){
    this->media = media;
}

double Aluno::getMedia(){
    return this->media;
}


