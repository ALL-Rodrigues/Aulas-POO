// Programa 36
// Lista 01 programa36.cpp

#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    cout << "\n";
    cout << "Posto de Gasolina\n\n";

    int opcao;
    cout << "[1] - Alcool " << endl;
    cout << "[2] - Gasolina " << endl;
    cout << endl;
    cout << "Informe tipo de combustivel: "; cin >> opcao;

    switch (opcao){
        float litros, reais;

    case 1:

        cout << "Informe quantos litros deseja de Alcool: "; cin >> litros;

        if(litros >= 0){
            if(litros <= 20){
                reais = litros * 3,78;
                reais = reais - (reais * 0.03);
            }else{
                reais = litros * 3,78;
                reais = reais - (reais * 0.5);
            }

            cout << "Valor dos litros de Alcool: " << fixed << setprecision(2) << reais << " R$." << endl;

        }else{
            cout << "Numero invalido!";
        }

        break;

    case 2:

        cout << "Informe quantos litros deseja de Gasolina: "; cin >> litros;

        if(litros > 0){
            if(litros <= 20 && litros > 0){
                reais = litros * 5,70;
                reais = reais - (reais * 0.04);
            }else{
                reais = litros * 5,70;
                reais = reais - (reais * 0.06);
            }

            cout << "Valor dos litros de Gasolina: " << fixed << setprecision(2) << reais << " R$." << endl;

        }else{
            cout << "valor invalido";
        }

        break;
    
    default:
        cout << "Numero invalido!"; 
        break;
    }

    return 0;
}

   