
//Programa 12
// Lista 01 programa12.cpp
#include <iostream>
#include <cstdlib>
using namespace std;

int main(){
    // Declaração de variáveis
    float altura, peso, P, X1, X2;
    char S;

    do{
        cout << " Informe seu Sexo(F/M): "; cin >> S; 

    }while(S != 'f' && S != 'F' && S != 'm' && S != 'M');
    
    cout << " Informe sua altura...: "; cin >> altura;
    cout << " Informe seu peso.....: "; cin >> peso;
    system("cls");

    if( S == 'f' || S == 'F'){
        P = (62.1 * altura) - 44.7;
        cout << "peso ideal para voce e: "<< P << " quilos." <<endl;
        X1 = peso + 3;
        X2 = peso - 3;
        if (P < X1 && P > X2) {
            cout << "Voce esta dentro da media do seu peso ideal com: " << peso << " quilos." << endl;
        } else if (X1 > P) {
            cout << "Voce esta acima do peso com: " << peso << " quilos." << endl; 
        } else if (X2 < P) {
            cout << "Voce esta abaixo do peso com: " << peso << " quilos." << endl;
        }
    }

    if(S == 'm' || S == 'M'){
        P = (72.7 * altura) - 58;
        cout << " Peso ideal para voce: "<< P << endl;
        X1 = peso + 3;
        X2 = peso - 3;
        if(P < X1 && P > X2){
            cout << " Voce esta dentro da media do seu peso ideal com: " << peso << " quilos."<< endl;
            cout << X1 << "," << X2;
        }
        if(X1 > P){
            cout << " Voce esta acima do peso com: " << peso << " quilos."<< endl; 
        }
        if(X2 < P){
            cout << " Voce esta abaixo do peso com: " << peso << " quilos."<< endl;
        }
    }

    return 0;
}

