#include<iostream>

using namespace std;

class Ponto{

    private:

        float x,y;

    public:

        Ponto(){

        }
        ~Ponto(){

        }

        void setX(float x){
            this->x = x;
        }
        
        float getX(){
            return x;
        }

        void setY(float y){
            this->y = y;
        }

        float getY(){
            return y;
        }

        void operator=(Ponto ponto1){
            this->x = ponto1.getX();
            this->y = ponto1.getY();
        }

        bool operator==(Ponto ponto1){
            if(this->x == ponto1.getX() && this->y == ponto1.getY()){
                return true;
            }
            else{
                return false;
            }
        }

        void imprimePonto(){
            cout << "(" << getX() << "," << getY() << ")" << endl;
        }
};