// Programa 33 
// Lista 01 programa33.cpp

#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    cout << "\n";
    cout << "Caixa Eletronico.\n\n";

    int saque, total, nota100, nota50, nota10, nota5, nota1;

    cout << "Informe valor do saque: "; cin >> saque;

    if(saque >= 10 && saque <=1000){
        total = saque; 

        nota100 = saque / 100;
        saque = saque % 100;

        nota50 = saque / 50;
        saque = saque % 50;

        nota10 = saque / 10;
        saque = saque % 10;

        nota5 = saque / 5;
        saque = saque % 5;

        nota1 = saque;
        
        cout << "valor do saque: " << total << "." << endl;
        
        if(nota100 != 0){
            if(nota100 > 1){
                cout << nota100 << " notas de 100." << endl;
            }else{
                cout << nota100 << " nota de 100." << endl;
            }
            //cout << nota100 << " nota de 100." << endl;
        }
        if(nota50 != 0){
            cout << nota50  << " nota de 50. " << endl;
        }
        if(nota10 != 0){
            if(nota10 > 1){
                cout << nota10 << " notas de 10." << endl;
            }else{
                cout << nota10 << " nota de 10." << endl;
            }
            //cout << nota10  << " notas de 10. " << endl;
        }
        if(nota5 != 0){
            cout << nota5   << " nota de 5.  " << endl;
        }
        if(nota1 != 0){
            if(nota1 > 1){
                cout << nota1 << " notas de 1." << endl;
            }else{
                cout << nota1 << " nota de 1." << endl;
            }
            //cout << nota1   << " notas de 1.  " << endl;
        }

    }else{
        cout << "Valor do saque nao autorizado.";
    }

    return 0;
}