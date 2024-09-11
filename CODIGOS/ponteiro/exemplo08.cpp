// Exemplo 08: ponteiro em funções
//
#include<iostream>
using namespace std;

// prototipo de função
int soma(int a, int b);
int subtrai(int a, int b);

// função principal
int main(){
    cout << "\n";
    cout << "Ponteiros para funcao\n\n";

    // declara um ponteiro para função
    int (*operacao) (int, int);

    // atribui a função soma() ao ponteiro
    operacao = soma;

    // chamando a função soma() atraves do ponteiro.
    cout << "soma: " << operacao(10, 5) << endl;

    // atribuindo a função subtrai() ao ponteiro
    operacao = subtrai;

    // chamando a função subtrai()  atraves do ponteiro 
    cout << "Subtracao: " << operacao(10, 5) << endl;

    cout << "\n";

    // fim do programa
    return 0;
}

// definição das funções 
// função que realiza uma soma 
int soma(int a, int b){
    return a + b;
}

// função que realiza uma subtração 
int subtrai(int a, int b){
    return a - b;
}