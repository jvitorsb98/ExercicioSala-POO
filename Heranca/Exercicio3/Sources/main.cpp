#include "../Headers/Livro.hpp"
#include "../Headers/Filme.hpp"


int main(){

    Livro livro("1984","George Orwell" , 12 , 399);
    Filme filme("Harry potter","J.K Howling",10,3);
    livro.mostraLivro();
    filme.mostraFilme();



}