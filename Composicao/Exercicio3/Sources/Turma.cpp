#include "../Headers/Turma.hpp"

void Turma::adicionarAluno(Aluno *aluno){
    getAlunos()->push_back(aluno);
}

std::vector<Aluno*>* Turma::getAlunos(){
    return &alunos;
}

void Turma::mostraTurma(){
    
    for(auto it=getAlunos()->begin() ; it!=getAlunos()->end() ; it++){
        (*it)->exibirDetalhes();
    }
}