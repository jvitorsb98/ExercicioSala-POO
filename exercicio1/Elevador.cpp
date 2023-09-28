#include "Elevador.hpp"

using namespace std;

Elevador::Elevador(int cargaMaxima, int numAndares): cargaMaxima(cargaMaxima) , numAndares(numAndares){
    setAndarAtual(0);
    setCargaAtual(0);
}

void Elevador::desceAndar(){
    if(getAndarAtual()>0){
        setAndarAtual(getAndarAtual()-1);
    }
}

void Elevador::sobeAndar(){
    if(getAndarAtual()<(getNumAndares()-1)){
        setAndarAtual(getAndarAtual()+1);
    }
}

void Elevador::entraPessoa(){
    if(getCargaAtual()<getCargaMaxima()){
        setCargaAtual(getCargaAtual()+1);
    }
}

void Elevador::saiPessoa(){
    if(getCargaAtual()>0){
        setCargaAtual(getCargaAtual()-1);
    }
}

void Elevador::setAndarAtual(int andarAtual){
    this->andarAtual = andarAtual;
}

void Elevador::setCargaAtual(int cargaAtual){
    this->cargaAtual = cargaAtual;
}

int Elevador::getCargaAtual(){
    return this->cargaAtual;
}

int Elevador::getAndarAtual(){
    return this->andarAtual;
}

int Elevador::getCargaMaxima(){
    return this->cargaMaxima;
}

int Elevador::getNumAndares(){
    return this->numAndares;
}