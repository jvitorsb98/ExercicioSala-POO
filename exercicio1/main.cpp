#include "Elevador.hpp"

using namespace std;


int main(){

    Elevador e = Elevador(10,20);
    char op;
    do{
        system("clear || cls");
        cout << "Estamos com " << e.getCargaAtual() << " passageiros" << endl;
        cout << "Andar " << e.getAndarAtual() << endl;
        cout << "U : sobe " << endl;
        cout << "D : desce " << endl;
        cout << "E : Entre pessoa" << endl;
        cout << "S : Sai pessoa" << endl;
        cout << "F : Fim do programa " << endl;
        cin >> op;

        switch (op)
        {
        case 'U':
            e.sobeAndar();
            break;
        case 'D':
            e.desceAndar();
            break;
        case 'E':
            e.entraPessoa();
            break;
        case 'S':
            e.saiPessoa();
            break;
        case 'F':
            exit(0);
            
        default:
            break;
        }

        if(op!= 'U' && op!='D' && op!='E' && op!='S' && op!='F'){
            cout << "Opção inválida" << endl;
        }
    }while(op!='F');



}