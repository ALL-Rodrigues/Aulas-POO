// Programa 37
// Lista 01 programa37.cpp

#include<iostream>
#include <cstdlib>
#include<iomanip>

using namespace std;
int main(){
    float morangoKg, macaKg, precoMg, precoMc, precoT, Quilos;
    char letra;

    cout << "\n";
    cout << "Armazem Paraiba\n\n";

    cout << "Voce comprou Morangos? (s/n): "; cin >> letra;
    if(letra == 's' || letra == 'S'){
        cout << "informe o total de Kg: "; cin >> morangoKg; 
    }
    system("cls");
    cout << "Voce comprou Macas? (s/n): "; cin >> letra;
    if(letra == 's' || letra == 'S'){
        cout << "Informe o total de Kg: "; cin >> macaKg;
    }
    system("cls");

    if(morangoKg <= 5){
        precoMg = morangoKg * 32.50;
    }else{
        precoMg = morangoKg * 30.20; 
    }
    if(macaKg <=5){
        precoMc = macaKg * 13.80;
    }else{
        precoMc = macaKg * 11.50;
    }

    Quilos = morangoKg + macaKg;
    precoT = precoMg + precoMc;

    cout << "Total de quilos " << Quilos << endl;
    cout << "Valor total: " << precoT << endl;    
    
    if(Quilos > 8 || precoT > 200){
        precoT -= precoT * 0.10;
        cout << "Valor a ser pago pelas compras com desconto: " << fixed << setprecision(2) << precoT << endl;

    }else{
        cout << "Valor a ser pago pelas compras sem desconto: " << fixed << setprecision(2) << precoT << endl;
    }

    return 0;
}
