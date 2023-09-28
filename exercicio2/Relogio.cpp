#include "Relogio.hpp"

std::string Relogio::getHora(){
    return std::to_string(this->hora)+":"+std::to_string(this->minuto)+":"+std::to_string(this->segundo);  
}

void Relogio::setHora(int hora, int minuto, int segundo){
    if(verificaHora(hora,minuto,segundo)){
        this->hora=hora;
        this->minuto=minuto;
        this->segundo=segundo;
    }
}

void Relogio::avancaSegundo(){

    if(this->segundo < 59){
        this->segundo++;
        return;
    }

    if(this->segundo==59){

        if(this->minuto<59){
            this->segundo=0;
            this->minuto++;
            return;
        }

        if(this->minuto==59){
            if(this->hora<23){
                this->segundo=0;
                this->minuto=0;
                this->hora++;
                return;
            }

            if(this->hora==23){
                this->segundo=0;
                this->minuto=0;
                this->hora=0;
                return;
            }

        }
        
    }
}
