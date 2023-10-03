#include "../Headers/Turma.hpp"

int main(){

    Turma t1;
    Aluno a1("joao",1);
    Aluno a2("paulo",2);
    Aluno a3("caio",3);
    t1.adicionarAluno(&a1);
    t1.adicionarAluno(&a2);
    t1.adicionarAluno(&a3);
    t1.mostraTurma();

}