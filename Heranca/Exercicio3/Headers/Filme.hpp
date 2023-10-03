#include "../Headers/ItemBiblioteca.hpp"


class Filme : public ItemBiblioteca{

    private:

    int tempoHoras;

    public:
        Filme();
        Filme(std::string titulo, std::string nomeAuthor, int quantidadeDisponivel, int tempoHoras);
        int getTempoHoras();
        void setTempoHoras(int tempoHoras);
        void mostraFilme();

};