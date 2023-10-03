#include "Ponto.hpp"

int main(){

    Ponto ponto1;
    Ponto ponto2;

    ponto1.setX(2);
    ponto1.setY(3);

    ponto2=ponto1;

    if(ponto1==ponto2){
        cout << "São iguais" << endl;
    }


}