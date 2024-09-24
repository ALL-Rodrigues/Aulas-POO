// Programa 31 
// Lista 01 programa31.cpp

#include<iostream>
#include<iomanip>
using namespace std;

int main(){
    cout << "\n";
    cout << "Programa ano bissexto.\n\n";
    int ano;
    cout << "Informe um ano: "; cin >> ano;
    if((ano % 400 == 0) || (ano % 4 == 0 && ano % 100 != 0)){
        cout << "Ano bissexto.";
    }else{
        cout << "Ano nao e um ano bissexto.";
    }
    return 0;
}