// exemplo 08: Fatorial utilizando o WHILE
/* Programa que  calcula o fatorial de um número fornecido pelo usuário*/

#include<iostream>
#include<iomanip>
using namespace std;

int main(){
    int i, valor;
    long int fatorial = 1;

    cout << "\n";
    cout << "calculo do fatorial utilizando o laco WHILE\n\n";
    cout << "* Informe o vlaor desejado: "; cin >> valor;

    i = 1;

    while(i<=valor){
        fatorial *= i;
        ++i;
    }
    cout << "\n=>Fatorial de "<< valor <<": " << fatorial <<"\n\n";

    return 0;
}