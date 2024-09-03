// Programa 41
// Lista 02 programa41.cpp
/*  Supondo que a população de um país A seja da ordem, de 80000 habitantes com uma taxa anual de crescimento de 3% 
    e que a população de B seja 200000 haabitantes com uma taxa de crescimento de 1.5%. Escreva um programa que calcule 
    e informe o número de anos necessários para que a população do país A ultrapasse a população do país B, mantidas as 
    taxas de crescimento.  
*/

#include<iostream>
using namespace std;

int main(){
    int A = 80000, B = 200000, Y = 0;

    while (A < B){   
        A = A + (A * 0.03);
        B = B + (B * 0.015);
        Y = Y + 1;
    }

    cout << " Populacao de A: "   << A << "\n";
    cout << " Populacao de B: "   << B << "\n";
    cout << " Anos Necessarios: " << Y << "\n";

    return 0;
}