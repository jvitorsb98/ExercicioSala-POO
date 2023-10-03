#include "../Headers/Retangulo.hpp"


double Retangulo::calcularArea(){
    return getBase()*getAltura();
}

void Retangulo::setBase(double base){
    this->base = base;
}

void Retangulo::setAltura(double altura){
    this->altura = altura;
}

double Retangulo::getBase(){
    return this->base;
}

double Retangulo::getAltura(){
    return this->altura;
}
