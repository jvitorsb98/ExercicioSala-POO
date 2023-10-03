#include <iostream>
#include <string>
#include <vector>
#include <fstream>
using namespace std;

class Data {
    int dia, mes, ano;
public:
    string geraString() {
        string dataStr = to_string(dia);
        dataStr.append("/");
        dataStr.append(to_string(mes));
        dataStr.append("/");
        dataStr.append(to_string(ano));
        return dataStr;
    }
    void setDia(int _dia) {
        dia = _dia;
    };
    void setMes(int _mes) {
        mes = _mes;
    };
    void setAno(int _ano) {
        ano = _ano;
    };
};

class paciente {
    string nome;
    Data dt_morte;
public:
    static paciente leDados() {
        paciente novoPaciente;
        cout << "Dados de um novo paciente" << endl;
        cout << "Digite o nome: " << endl;
        string nome;
        getline(cin, nome);
        novoPaciente.setNome(nome);
        cout << "Digite a data: " << endl;
        int dia, mes, ano;
        cin >> dia >> mes >> ano;
        Data dtMorte;
        dtMorte.setDia(dia);
        dtMorte.setMes(mes);
        dtMorte.setAno(ano);
        novoPaciente.setDtMorte(dtMorte);
        return novoPaciente;
    }
    void listaDados() {
        cout << "Paciente: " << getNome() << endl;
        cout << "Falecido em " << getdtMorte().geraString() << endl;
    }
    void setNome(string _nome) {
        nome = _nome;
    }
    string getNome() {
        return nome;
    }

    void setDtMorte(Data _dataMorte) {
        dt_morte = _dataMorte;
    }

    Data getdtMorte() {
        return dt_morte;
    }
};

class mausoleu {
    int id;
    static int contador;
    string localizacao;
public:
    vector<paciente> pacientes;
    mausoleu() {
        setContador(getContador() + 1);
        this->setId(getContador());
    }
    static void setContador(int cont) {
        contador = cont;
    }
    static int getContador() {
        return contador;
    }

    paciente buscaPaciente(string nome){

        for(auto it=pacientes.begin() ; it!=pacientes.end() ; it++){
            if(it->getNome() == nome){
                return *it;
            }
        }
        paciente pacient;
        return pacient;
    }

    static mausoleu leNovo() {
        mausoleu novoMausoleu = mausoleu();
        cout << "Digite a localizacao do novo mausoleu: ";
        string loc;
        getline(cin, loc);
        novoMausoleu.setLocalizacao(loc);
        return novoMausoleu;
    }
    int getId() {
        return this->id;
    }
    void setId(int id) {
        this->id = id;
    }
    void listaDados() {
        cout << "Dados do mausoleu" << endl;
        cout << "Id " + to_string(getId()) << endl;
        cout << getLocalizacao() << endl;
        cout << "Lista de pacientes deste mausoleu: " << endl;
        for (paciente p : pacientes) {
            p.listaDados();
        }
    }
    void setLocalizacao(string _localizacao) {
        localizacao = _localizacao;
    }
    string getLocalizacao() {
        return localizacao;
    }

    void recepciona(paciente _paciente) {
        pacientes.push_back(_paciente);
    }

    void listaPacientes() {
        for (paciente p : pacientes) {
            cout << p.getNome() << endl;
        }
    }
};

int mausoleu::contador = 0;

class Persistencia {
public:
    static void recuperaMausoleu(vector<mausoleu> &mausoleus) {
        ifstream inMausoleus;
        inMausoleus.open("mausoleus.txt", ios_base::in);

        if (inMausoleus.is_open()) {
            while (!inMausoleus.eof()) {
                mausoleu mauso;
                string id;
                string localizacao;
                getline(inMausoleus, id);
                getline(inMausoleus, localizacao);
                if (id.length() > 0) {
                    int idd = stoi(id);
                    mauso.setId(idd);
                    mauso.setLocalizacao(localizacao);
                    mausoleus.push_back(mauso);
                }
            }
            inMausoleus.close();
        }

        ifstream inPacientes;
        inPacientes.open("pacientes.txt", ios_base::in);

        if (inPacientes.is_open()) {
            while (!inPacientes.eof()) {
                paciente pacient;
                string id;
                string nome;
                string data;
                Data dt_Morte;
                getline(inPacientes,id);
                getline(inPacientes, nome);
                getline(inPacientes, data);
                
                

                if (id.length() > 0) {

                    dt_Morte.setDia(stoi(data.substr(0,1)));
                    dt_Morte.setMes(stoi(data.substr(3,4)));
                    dt_Morte.setAno(stoi(data.substr(6)));

                    pacient.setDtMorte(dt_Morte);
                    pacient.setNome(nome);


                    int idd = stoi(id);
                    for(auto it=mausoleus.begin() ; it!= mausoleus.end() ; it++){
                        if(it->getId()==idd){
                            it->recepciona(pacient);
                        }
                    }
                }
            }
            inMausoleus.close();
        }

    }
};

int main() {
    vector<mausoleu> mausoleus;
    Persistencia::recuperaMausoleu(mausoleus);

    int op;
    do {
        cout << "Opcoes" << endl;
        cout << "1. Incluir Mausoleu" << endl;
        cout << "2. Listar Mausoleus" << endl;
        cout << "3. Recepcionar paciente" << endl;
        cout << "4. Busca Paciente " << endl;
        cout << "5. Grava Dados " << endl;
        cout << "0. Sair" << endl;
        cout << "Digite opcao: ";
        cin >> op;
        cin.ignore(); // Limpar o caractere de nova linha

        if (op == 1) {
            mausoleu novo = mausoleu::leNovo();
            mausoleus.push_back(novo);

            ofstream outMausoleus;
            outMausoleus.open("mausoleus.txt", ios_base::app);
            if (outMausoleus.is_open()) {
                outMausoleus << novo.getId() << endl;
                outMausoleus << novo.getLocalizacao() << endl;
                outMausoleus.close();
            }
        }
        if (op == 2) {
            cout << "------LISTA DE MAUSOLEUS------" << endl;
            for (mausoleu m : mausoleus) {
                m.listaDados();
            }
            cout << "---------FIM DA LISTA---------" << endl;
        }
        if (op == 3) {
            int idBusca;
            paciente novoPac = paciente::leDados();
            cout << "------Paciente Criado------" << endl;
            cout << "Digite o id do mausoleu : ";
            cin >> idBusca;
            cin.ignore(); // Limpar o caractere de nova linha

            for (auto it = mausoleus.begin(); it != mausoleus.end(); it++) {
                if (it->getId() == idBusca) {
                    it->recepciona(novoPac);
                    
                    ofstream outPacientes;
                        outPacientes.open("pacientes.txt", ios_base::app);
                        if (outPacientes.is_open()) {
                            outPacientes << it->getId() << endl;
                            outPacientes << novoPac.getNome() << endl;
                            outPacientes << novoPac.getdtMorte().geraString() << endl;
                            outPacientes.close();
                        }
                }
                
            }
        }
        if (op==4){
            string nome;
            system("clear||cls");
            cout << "Qual nome do paciente que deseja buscar ? ";
            getline(cin,nome);
            paciente pacienteBusca;

            auto it=mausoleus.begin();
            for( ; it!= mausoleus.end() ; it++){
                pacienteBusca = it->buscaPaciente(nome);
                if(pacienteBusca.getNome() == nome){
                    pacienteBusca.listaDados();
                }
            }
            if(it==mausoleus.end()){
                cout << "Paciente não encontrado";
            }
        }
        if(op==5){
            ofstream escreveMausoleus;
            escreveMausoleus.open("mausoleus.txt", ios_base::out);
            if(escreveMausoleus.is_open()){
                for(auto it=mausoleus.begin() ; it!=mausoleus.end() ; it++){
                    escreveMausoleus << it->getId() << endl;
                    escreveMausoleus << it->getLocalizacao() << endl;
                }
                escreveMausoleus.close();
            }else{
                cout << "Erro ao abrir arquivo" << endl;
            }

            ofstream escrevePacientes;
            escrevePacientes.open("pacientes.txt", ios_base::out);
                if(escrevePacientes.is_open()){
                for(auto it=mausoleus.begin(); it!=mausoleus.end() ; it++){
                    for(auto itera=it->pacientes.begin() ; itera!=it->pacientes.end() ; itera++){
                        escrevePacientes << it->getId() << endl << endl;
                        escrevePacientes << itera->getNome() << endl;
                        escrevePacientes << itera->getdtMorte().geraString()  << endl;
                    }
                escrevePacientes.close();
                }
            }else{
                cout << "Erro ao abrir arquivo" << endl;
            }
        }
    } while (op != 0);

    return 0;
}
