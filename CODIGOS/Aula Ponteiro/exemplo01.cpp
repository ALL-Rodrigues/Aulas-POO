// Exemplo 01 em ponteiro.
// programa que mostra a utilização de ponteiros

#include<iostream>
using namespace std;
int main(){

    cout << "\n";
    cout << "Declaracao de variaveis ponteiro\n\n";

    // declaração e inicializa uma variavel inteira
    int idade = 25;
    // declara um ponteiro que apontaa para a variavel <idade>
    int *idadePtr = &idade;

    int *nomePtr = nullptr; // ponteiro nulo
    
    // exibe os valores 
    cout << " 1. Valor da variavel <idade>: " << idade << "\n";
    cout << " 1. Endereco da variavel <idade>: " << &idade << "\n";
    cout << " 2. Valor da variavel <idadePtr>: " << idadePtr << "\n";
    cout << " 2. Valor apontado pela variavel <*idadePtr>: " << *idadePtr << "\n\n";

    // fim do programa
    return 0;
}