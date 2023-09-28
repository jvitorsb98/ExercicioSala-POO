#include<iostream>

class Relogio{

    private:
        int hora;
        int minuto;
        int segundo;

    public:
        std::string getHora();
        void setHora(int hora, int minuto, int segundo);
        void avancaSegundo();

    private:
        bool verificaHora(int hora, int minuto, int segundo){
            return (hora>=0 && hora<24 && minuto>=0 && minuto<60 && segundo>=0 && segundo<60);
        }
};