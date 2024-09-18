// exemplo 14: exemplo de uso de alocação dinamica de memoria

#include<iostream>

using namespace std;

// função principal
int main(){
    cout << "\n";
    cout << "exemplo de alocacao Dinamica de memoria\n\n";

    // aloca espaco para um array de 5 inteiros
    int *numeros = new int[5];

    // inicializa os valores do array  
    for (int i = 0; i < 5; ++i){
        numeros[i] = i * 2;
    }

    // exibe os valores do 
    cout << "* numeros: [";

    for (int i = 0; i < 5; ++i){
        if(i < 4){
            cout <<numeros[i] << ", ";
        } else {
            cout << numeros[i] << "]\n";
        }
    }

    // libera a memoria que foi alocada
    delete[] numeros;

    cout << endl;
    return 0;
}