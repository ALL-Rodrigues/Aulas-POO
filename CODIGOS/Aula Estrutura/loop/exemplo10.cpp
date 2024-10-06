// exemplo 10: cálculo de parotial utilizando o FOR
/* Programa que calcule o fatorial de um valor fornecido pelo usuário */

#include<iostream>
#include<iomanip>
using namespace std;

int main(){
    // declaração de variáveis 
    int i, valor;
    long int fatorial = 1;

    cout << "\n";
    cout <<" Calculo do fatorial utilizando o laca FOR\n\n ";
    cout <<" * informe o valor desejado: "; cin >> valor;

    // laço para calcular o fatorial 
    for(i = 1; i <= valor; ++i){
        fatorial *= i; 
    }
    cout << "\n=> Fatorial de " << valor << ": " << fatorial <<"\n\n";
    
    return 0;
}