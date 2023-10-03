#ifndef CIRCULO_HPP
#define CIRCULO_HPP

#include "../Headers/Forma.hpp"

class Circulo : Forma{

    double raio;

    public:

        double calcularArea();
        double getRaio();
        void setRaio(double raio);


};


#endif