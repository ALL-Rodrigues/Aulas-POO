// Programa 28
// Lista 01 programa28.cpp
/*  Escreva um programa que leia um número e exiba o dia correspondente da semana:
    1 = Domingo, 2 = Segunda, etc... O programaa também deve exibir uma mensagem caso o usuário 
    forneça um valor inváçido.  
*/

#include<iostream>
using namespace std;

int main(){
    cout << "\n";
    int num;

    cout << " Informe o numero do dia da semana: "; cin >> num;

    switch(num){
        case 1:
            cout << "1 - Domingo." << endl;
            break;

        case 2:
            cout << "2 - Segunda-Feira." << endl;
            break;

        case 3:
            cout << "3 - Terca-Feira." << endl;
            break;

        case 4:
            cout << "4 - Quarta-Feira." << endl;
            break;

        case 5:
            cout << "5 - Quinta-Feira." << endl;
            break;

        case 6:
            cout << "6 - Sexta-Feira." << endl;
            break;

        case 7:
            cout << "7 - Sabado." << endl;
            break;

        default:
            cout << " Valor Invalido." << endl;
            break;
    }

    return 0;
}

