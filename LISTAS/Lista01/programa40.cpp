// Programa 40
// Lista 01 priograma40.cpp

/*  O índice de massa corpórea, ou IMC, indica o grau de obesidade de uma pessoa. Este 
indice é obtido pelo pesso (em kg) dividido pelo quadrado da altura (em metros). A tabela 
a seguir apresenta as faixas deste indice:

    |---------|--------------------|
    | IMC     | Avalição           |
    |---------|--------------------|
    | [ <20 ] | Abaixo do Normal   |
    | [20,25] | Normal             |
    | [25,30] | Sobrepeso          |
    | [30,35] | Obesidade leve     |
    | [35,40] | Obesidade Moderada |
    | [>= 40] | Obesidade Mórbida  |
    |---------|--------------------|

    Escreva um programa que solicite o peso e a altura do úsuario. Em seguida, o programa 
deve calcular o valor de seu IMC e apresentar o resultado da avaliação, informando a situação 
da avaliação do usuário.
*/

#include<iostream>
#include<iomanip>
#include<cmath>

using namespace std;

int main(){
    cout << "Programa de Calcular o IMC do usuario:\n\n";

    float peso, altura, IMC; 

    cout << "Informe o peso: "; cin >> peso;
    cout << "Informe a altura: "; cin >> altura;

    IMC = peso / powl(altura, 2); 

    if(IMC < 20){
        cout << "\n\nIMC: " << setprecision(3) << IMC << endl;
        cout << " Abaixo do Normal." << endl;

    }else if(IMC >= 20 & IMC < 25){
        cout << "\n\nIMC: " << setprecision(3) << IMC << endl;
        cout << " Normal." << endl;

    }else if(IMC >= 25 & IMC < 30){
        cout << "\n\nIMC: " << setprecision(3) << IMC << endl;
        cout << " Sobrepeso." << endl; 

    }else if(IMC >= 30 & IMC < 35){
        cout << "\n\nIMC: " << setprecision(3) << IMC << endl;
        cout << " Obesidade Leve." << endl;

    }else if(IMC >= 35 & IMC < 40){
        cout << "\n\nIMC: " << setprecision(3) << IMC << endl;
        cout << " Obesidade Moderada." << endl;

    }else if(IMC >= 40){
        cout << "\n\nIMC: " << setprecision(3) << IMC << endl;
        cout << " Obesidade Morbida." << endl;
    }

    return 0;
}