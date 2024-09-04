// Programa 23
// Lista 01 programa23.cpp

#include<iostream>
using namespace std;
int main(){
    int N;
    cout << "Informe um numero inteiro de 1 a 1000: ";
    cin >> N;

    if (N < 1 || N > 1000) {
        cout << "Numero invalido" << endl;
    } else {
        int centenas = N / 100;
        int dezenas = (N % 100) / 10;
        int unidades = N % 10;

        cout << "\n";
        cout << N << " = ";
        
        if(centenas <= 1){
            cout << centenas << " Centena, ";
        }else{
            cout  << centenas << " Centenas, ";
        }

        if(dezenas <= 1){
            cout << dezenas << " Dezena, ";
        }else{
            cout << dezenas << " Dezenas, ";
        }

        if(unidades <= 1){
            cout << unidades << " Unidade." << endl;
        }else{
            cout << unidades << " Unidades." << endl;
        }
    }

    return 0;
}