// exemplo 04: programa para demonstrar o uso de ponteiros para estruturas

#include<iostream>
#include<string>

using namespace std;

// estruturas
// definição da estrutura pokemon
struct Pokemon {
    // atributos 
    string nome;
    string tipo;
    int nivel;
    int hp;

    // metodo para aumentar os pontos de vida do pokemon
    void aumentarHP(int pontos){
        hp += pontos;
    }
};

// função princiap
int main(){
    cout << "\n";
    cout << "* exemplo pokemon\n\n";

    // alocando dinamicamente uma estrutura do tipo pokemon
    Pokemon* ptrPokemon  = new Pokemon;

    // utiliza o ponteiro para atribuir os valores oa pokemon
    ptrPokemon->nome = "Pikachu";
    ptrPokemon->tipo = "Eletrico";
    ptrPokemon->nivel = 1;
    ptrPokemon->hp = 1;

    // utiliza o ponteiro para acessar os valores do Pokemon
    cout << ">> Dados do Pokemon\n\n"<< endl;
    cout << "Nome: " << ptrPokemon->nome << endl;
    cout << "tipo: " << ptrPokemon->tipo << endl;
    cout << "nivel: " << ptrPokemon->nivel << endl;
    cout << "HP : " << ptrPokemon->hp << endl;

    cout << endl;

    cout << ">> um pokemon selvagem apareceu.... vamos batalhar!\n\n";
    cout << "Seu pikachu venceu uma luta muito dificil.....";
    cout << "ele ganhou 50 pontos!\n";

    // aumenta o hp do pokemon;
    ptrPokemon->aumentarHP(50);

    cout << "Olhe, o que esta acontecendo? seu pikachu esta Brilhando!\n";

    // aumenta o nivel do pikachu
    ptrPokemon->nivel++;

    cout << "O pikachu subiu de nivel!\n\n";

    // utiliza o ponteiro para acessar os valores do pokemon
    cout << ">> Dados do Pokeon\n" << endl;
    cout << "Nome: " << ptrPokemon->nome << endl;
    cout << "Tipo: " << ptrPokemon->tipo << endl;
    cout << "Nivel: " << ptrPokemon->nivel << endl;
    cout << "HP: " << ptrPokemon->hp << endl;

    cout << endl;

    // liberando a memoria
    
    return 0;
}