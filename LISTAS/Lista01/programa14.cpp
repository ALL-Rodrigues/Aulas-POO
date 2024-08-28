// Programa 14
// Lista 01 programa14.cpp

#include<iostream>
using namespace std;
int main(){

    float peso, excesso, multa;
    cout << " Informe o peso do peixe em Kg: "; cin >> peso;

    if(peso > 50){
        excesso = peso - 50;
        multa = excesso * 4;
        cout << " O valor da multa e de R$" << multa << ",00 Reais.";
    } else {
        cout << " multa nao se aplica a esse peso. ";
    }
    return 0;
}