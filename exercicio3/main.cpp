#include "Agenda.hpp"

using namespace std;

int main(){

    string linha = "-------------------------------------";
    Agenda a;

    a.armazenaPessoa("Abel",22,1.78);
    a.armazenaPessoa("Tiago",20,1.80);
    a.imprimePovo();
    cout << linha << endl;

    int posicao= a.buscaPessoa("Tiago");
    if(posicao>0){
        a.imprimePessoa(posicao);
    }
    cout << linha << endl;

    a.removePessoa("Tiago");
    a.imprimePovo();
    cout << linha << endl;


    return 0;
}