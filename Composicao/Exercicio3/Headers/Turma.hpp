#include "../Headers/Aluno.hpp"
#include<vector>

class Turma{

    private:
        std::vector<Aluno*> alunos;

    public:
        void adicionarAluno(Aluno* aluno);
        std::vector<Aluno*>* getAlunos();
        void mostraTurma();
};