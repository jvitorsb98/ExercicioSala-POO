#include "../Headers/Circulo.hpp"

#include<cmath>

void Circulo::setRaio(double raio){
    this->raio = raio;
}

double Circulo::getRaio(){
    return this->raio;
}

double Circulo::calcularArea(){
    return M_PI*getRaio();
}