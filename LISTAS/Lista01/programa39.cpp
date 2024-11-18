#include<iostream>
#include <cstdlib>
#include<iomanip>
#include<string>

using namespace std;

int main(){
    string tipo = "alcatra";
    int tipocarne = 2;
    int carneKg = 12; 
    int precoTotal = 489.90; 
    //float carneKg = 12.9;
    float desconto = 3.59;


    cout << "+--------------------------------------------+"                         << endl;
    cout << "|                  Cupom Fiscal              |"                         << endl;
    cout << "+--------------------------------------------+"                         << endl;
    cout << "| Tipo da Carne....: [" << tipocarne << "] " << tipo << setw(14) << "|" << endl;
    cout << "| Quantidade.......: " << carneKg                    << setw(23) << "|" << endl;
    cout << "| Preco total......: " << precoTotal                 << setw(22) << "|" << endl;
    cout << "| Valor do desconto: " << desconto - precoTotal      << setw(18) << "|" << endl;
    cout << "+--------------------------------------------+"                         << endl;
    cout << "| Valor a ser pago.: " << desconto                   << setw(21) << "|" << endl;
    cout << "+--------------------------------------------+"                         << endl;
    return 0;
}