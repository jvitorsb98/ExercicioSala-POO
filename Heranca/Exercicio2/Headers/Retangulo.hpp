#ifndef RETANGULO_HPP
#define RETANGULO_HPP

#include "../Headers/Forma.hpp"

class Retangulo : Forma{

    private:
        double base , altura;

    public:
        double calcularArea();
        void setBase(double base);
        void setAltura(double altura);
        double getBase();
        double getAltura();


};


#endif