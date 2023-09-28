#include "Relogio.hpp"
#include<iomanip>

using namespace std;

int main(){

    Relogio r;
    r.setHora(22,59,0);
    while (1)
    {
       cout << setprecision(2) << r.getHora() << endl;
       getchar();
       r.avancaSegundo();
    }
    


}