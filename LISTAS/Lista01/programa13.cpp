// Programa 13
// Lista 01 programa13.cpp

#include<iostream>
#include<cmath>

using namespace std;

int main(){

    float metrosQuadrados, litrosTinta, precoTinta, latasTinta;

    cout << "digite o tamanho em metros quadrados da area a ser pintada: "; cin >> metrosQuadrados;

    litrosTinta = metrosQuadrados / 3;
    latasTinta = ceil(litrosTinta/18);
    precoTinta = latasTinta * 80;

    cout << " Litros de tinta necessarios: " << fixed << setprecision(2)<< litrosTinta << endl;
    cout << " Latas de tinta necessarias: " << fixed << setprecision(2)<< latasTinta << endl;
    cout << " Preco total: " << fixed << setprecision(2)<< precoTinta << endl;
    cout << "\n\n";
    return 0;
}