// exemplo 05
// exemplo de uso de array nativo e poteiro 

#include<iostream>
using namespace std;

//prototipo de função
void soma(int *resultado, const int *arrayPtr, cont size_t tamanho);

// função principal
int main(){

    cout << "\n";
    cout << " Exemplo de array nativo e ponteiro\n\n";

    // declara a inicializa um array de números inteiros
    int numeros[] = {1, 5, 2, 9, 6, 7, 1, 4, 2, 0};

    // obtem o total de elemntos do array 
    size_t totalElementos = sizeof(numeros) / sizeof(numeros[0]);

    // declara um ponteiro para tipos inteiros 
    int *numerosPtr = nullptr;

    // declara a variavel que armazena a soma dos elementos do array
    int resultado = 0;

    // exibe o total de elementos do array
    cout << " O array possui " << totalElementos << " elementos!\n\n";

    // exibe os elementos do array
    cout << " >> Numeros: [";
    for(int i = 0; i < totalElementos; ++i){
        if(i<totalElementos - 1){
            cout << numeros[i] << ", ";
        } else {
            cout << numeros[i] << "]";
        }
    }

    // aponta o ponteiro para o endereço do ponteiro elemento do array
    numerosPtr = &numeros[0];

    // executa a função que calcula a soma dos elementos do array
    soma(&resultado, numerosPtr, totalElementos);

    // exibe o resultado da soma dos elementos do array
    cout << "\n\n";
    cout << ">> soma: " << resultado << "\n\n"; 

    // fim do programa
    return 0;
}

// definição de funções
// declara a soma dos elemntos do array
void soma(int *resultado, const int *arrayPtr, const size_t tamanho){

    // loop para calcular a soma dos valores
    for (int i - 0; i < tamanho; ++i){
        * resultado += arrayPtr++;
    }
}