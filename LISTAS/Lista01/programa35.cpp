// Programa 35
// Lista 01 programa35.cpp

#include<iostream>
#include<cmath>

using namespace std;

int main(){
    float num1, num2, R, X;
    int opcao;

    cout << "Informe um numero: "; cin >> num1;
    cout << "Informe um numero: "; cin >> num2;

    cout << "\n";
    cout << " Operacoes que podem ser realizadas " << endl; 
    cout << "[1] - Soma " << endl;
    cout << "[2] - Subtracao " << endl;
    cout << "[3] - Multiplicacao " << endl;
    cout << "[4] - Divisao " << endl;
    cout << "Informe qual operacao? "; cin >> opcao;

    switch(opcao){
        case 1:
            R = num1 + num2;
            break;
        case 2:
            R = num1 - num2;
            break;
        case 3:
            R = num1 * num2;
            break;
        case 4:
            R = num1 / num2;
            break;
        default:
            cout << "numero invalido!\n ";
            break;
    }

    cout << "a resposta e: " << R << "." << endl;

    X = fmod(R, 2.0);
    if(X == 0){
        cout << "O resultado e par, ";
    } else {
        cout << "O resultado e impar, ";
    }

    if(R < 0){
        cout << "Negativo ";
    }else{
        cout << "Positivo ";
    }

    if(R - (int)R == 0){
        cout << "e inteiro.";
    }else{
        cout << "e decimal.";
    }
    return 0;
}
