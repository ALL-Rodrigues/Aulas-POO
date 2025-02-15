// programa 43
// Lista o2 programa43.cpp

/*  Escreva um programa que leia 5 números e informe a soma e a média dos números. */

#include<iostream>

using namespace std;

int main(){
    cout <<"\n\n";
    cout << "Programa calculo soma e media.\n\n";

    int n; 
    int S = 0;
    float M;

    for(int i = 0; i < 5; ++i){
        cout << "Informe o Numero " << i+1 <<": "; cin >> n;
        S = S + n;
    }

    M = S / 5;

    cout <<"\n";
    cout << " Soma.: " << S << endl;
    cout << " Media: " << M << endl;

    return 0;

}