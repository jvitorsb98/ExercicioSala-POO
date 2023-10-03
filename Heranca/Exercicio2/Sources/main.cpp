#include "../Headers/Retangulo.hpp"
#include "../Headers/Circulo.hpp"
#include<iostream>

int main(){

    Circulo circulo;
    Retangulo retangulo;

    circulo.setRaio(2);

    retangulo.setAltura(2);
    retangulo.setBase(3);

    std::cout << circulo.calcularArea() << std::endl;
    std::cout << retangulo.calcularArea() << std::endl;


}