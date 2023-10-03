#include "../Headers/ItemBiblioteca.hpp"


class Livro : public ItemBiblioteca{

    private:

        int numPaginas;

    public:
        Livro();
        Livro(std::string titulo, std::string nomeAuthor, int quantidadeDisponivel, int numPaginas);
        int getNumPaginas();
        void setNumPaginas(int numPaginas);
        void mostraLivro();

};