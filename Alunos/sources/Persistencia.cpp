#include "../headers/Persistencia.hpp"

#include<fstream>
#include<cctype>

void Persistencia::RecuperaDados(std::vector<Disciplina> &listaDisciplinas){
    std::ifstream inDisciplinas;
    std::ifstream inProfessores;
    std::ifstream inAlunos;

    inDisciplinas.open("../BancoDeDados/disciplinas.txt",std::ios_base::in);
    if(inDisciplinas.is_open()){
        while(inDisciplinas.eof() == false){
            Disciplina disciplina;
            std::string id;
            std::string nome;
            getline(inDisciplinas,id);
            getline(inDisciplinas,nome);
            if(id.length()>0){
                int idd = stoi(id);
                disciplina.setId(idd);
                disciplina.setNome(nome);
                listaDisciplinas.push_back(disciplina);
            }
        }
        inDisciplinas.close();
    }else{
        std::cout << "Erro ao carregar arquivo 'disciplinas.txt'" << std::endl;
    }
    //professores

    inProfessores.open("../BancoDeDados/professores.txt",std::ios_base::in);
    if(inProfessores.is_open()){
        while(inProfessores.eof() == false){
            std::string idDisciplina;
            std::string idProfessor;
            std::string nome;
            getline(inProfessores,idDisciplina);
            getline(inProfessores,idProfessor);
            getline(inProfessores,nome);
            if(idDisciplina.length()>0 && idProfessor.length() >0){
                int iddDisciplina = stoi(idDisciplina);
                int iddProfessor = stoi(idProfessor);

                for(auto it=listaDisciplinas.begin() ; it!=listaDisciplinas.end() ; it++){
                    if(it->getId() == iddDisciplina){
                        it->professor.setId(iddProfessor);
                        it->professor.setNome(nome);
                    }
                }
                
            }
        }
        inProfessores.close();
    }else{
        std::cout << "Erro ao carregar arquivo 'professores.txt'" << std::endl;
    }

    // Alunos

    inAlunos.open("../BancoDeDados/alunos.txt",std::ios_base::in);
    if(inAlunos.is_open()){
        while(inAlunos.eof() == false){
            Aluno aluno;
            std::string idDisciplina;
            std::string idAluno;
            std::string nome;
            std::string notas[4];
            double media=0;

            getline(inAlunos,idDisciplina);
            getline(inAlunos,idAluno);
            getline(inAlunos,nome);
            for(int i = 0 ; i < 4 ; i++){
                getline(inAlunos,notas[i]);
            }
            if(idDisciplina.length()>0 && idAluno.length() >0 && notas->length()>0){
                int iddDisciplina = stoi(idDisciplina);
                int iddAluno = stoi(idAluno);
                aluno.setNome(nome);
                aluno.setId(iddAluno);
                for(int i = 0 ; i < 4 ; i++){
                    aluno.setNotas(i,stod(notas[i]));
                    media += aluno.getNotas(i);
                }
                media /=4;
                aluno.setMedia(media);

                for(auto it=listaDisciplinas.begin() ; it!=listaDisciplinas.end() ; it++){
                    if(it->getId() == iddDisciplina){
                        it->listaAlunos.push_back(aluno);
                    }
                }
                
            }
        }
        inAlunos.close();
    }else{
        std::cout << "Erro ao carregar arquivo 'alunos.txt'" << std::endl;
    }

}
