// exemplo 13: exemplo de uso de ponteiros para ponteiros

#include<iostream>

using namespace std;

// prototipo de funcao
void alteraPonteiro(int **PP);

// principal
int main(){
    cout << "\n";
    cout << "exemplo de ponteiro para ponteiro\n\n";

    // declara uma variavel inteira
    int X = 10;

    // declara um ponteiro e aponta para o endereco da variavvel inteira
    int *P = &X;

    // exibe o valor apontado pelo ponteiro antes da alteração 
    cout << "Valor antes da alteracao: " << *P << endl;

    // executa a função para alterar o ponteiro 
    alteraPonteiro(&P);

    // exibe o valor apontado pelo ponteiro após a alteração
    cout << "Valor apos: " << *P << endl;

    cout << endl;

    return 0;
}

// definição de funções
// Funcão alteraPonteiro
void alteraPonteiro(int **PP){
    static int Y = 100;

    // faz o ponteiro original 
    *PP = &Y;
}