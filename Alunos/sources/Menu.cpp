#include "../headers/Menu.hpp"

void Menu::menu(){
    //----inicializa dados------//
    std::vector<Disciplina> listaDisciplinas;
    Persistencia::RecuperaDados(listaDisciplinas);

    //--Etapa Menu--//
    int escolha;

    std::cout << "-----------MENU-----------" << std::endl;
    std::cout << "[1] Cadastrar Nova Disciplina " << std::endl;
    std::cout << "[2] Cadastrar Novo Professor " << std::endl;
    std::cout << "[3] Cadastrar Novo Aluno " << std::endl;
    std::cout << "[4] Inserir Notas a um Aluno" << std::endl;
    std::cout << "[5] Listar Todas as Disciplinas" << std::endl;

    switch (escolha)
    {
    case 5:
        for(auto it=listaDisciplinas.begin() ; it!=listaDisciplinas.end() ; it++){
            it->mostraDados();
        }            
        break;
    
    default:
        break;
    }


}