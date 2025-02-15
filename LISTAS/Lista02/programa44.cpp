// Programa 44
// Lista 02 programa44.cpp

/* Escreva um programa que peça a entrada de dois numeros: Base e Expoente. em seguida, o programa deve calcular e exibir o primeiro número elevado ao segundo número. não utilize a função de potencia da linguagem. */

#include<iostream>
#include<iomanip>
#include<cmath>

using namespace std;

int main(){
    int base, expoente, resultado = 1; 
    
    cout << "Digite base....: "; cin >> base;
    cout << "Digite expoente: "; cin >> expoente;

    for(int i = 0; i < expoente; ++i){
        resultado *= base;
    }

    cout << "Resultado: " << resultado;

    return 0;
}