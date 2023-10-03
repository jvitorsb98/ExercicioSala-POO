#include "../Headers/Cidade.hpp"
#include<vector>

void inserirEstado(std::vector<Estado> &estados);
void listarEstados(std::vector<Estado> &estados);
void inserirCidade(std::vector<Estado> &estados, std::vector<Cidade> &cidades);
void listarCidade(std::vector<Cidade> &cidades);

int main(){

    std::vector<Estado> estados;
    std::vector<Cidade> cidades;

    int escolha;

    do{
        std::cout << "Realize uma escolha : " << std::endl;
        std::cout << "[1] Inseir Estado" << std::endl;
        std::cout << "[2] Inserir Cidade" << std::endl;
        std::cout << "[3] Listar Estados" << std::endl;
        std::cout << "[4] Listar Cidades" << std::endl;
        std::cout << "[0] Sair" << std::endl << std::endl;
        std::cout << "Escolha : " << std::endl;
        std::cin >> escolha;
        std::cin.get();

        switch (escolha)
        {
        case 1:
            inserirEstado(estados);
            break;
        case 2:
            inserirCidade(estados,cidades);
            break;
        case 3:
            listarEstados(estados);
            break;
        case 4:
            listarCidade(cidades);
        
        default:
            break;
        }
    }while(escolha!=0);



}

void inserirEstado(std::vector<Estado> &estados){
    system("clear||cls");
    Estado estado;
    estado.preencheEstado();
    estados.push_back(estado);
}

void listarEstados(std::vector<Estado> &estados){
    system("clear||cls");
    for(auto it=estados.begin() ; it!=estados.end() ; it++){
        std::cout << it->getNome() << std::endl;
        std::cout << it->getSigla() << std::endl;
    }
}

void inserirCidade(std::vector<Estado> &estados, std::vector<Cidade> &cidades){
    system("clear||cls");
    Cidade cidade;
    std::string nome;
    std::string sigla;
    std::cout << "Qual o nome da cidade ?" << std::endl;
    getline(std::cin , nome);
    std::cout << "Qual a sigla do estado ? " << std::endl;
    getline(std::cin,sigla);
    
    for(auto it=estados.begin(); it!=estados.end() ; it++){
        if(sigla== it->getSigla()){
            cidade.setNome(nome);
            cidade.setEstado(&(*it));
            cidades.push_back(cidade);
        }
    }

    
}

void listarCidade(std::vector<Cidade> &cidades){
    system("clear||cls");
    for(auto it=cidades.begin() ; it!=cidades.end() ; it++){
        std::cout << it->getNome() << std::endl;
        std::cout << it->getEstado()->getNome() << std::endl;
        std::cout << it->getEstado()->getSigla() << std::endl;

    }
}
