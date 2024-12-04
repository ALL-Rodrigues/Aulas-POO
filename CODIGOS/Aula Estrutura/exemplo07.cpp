// exemplo 07: While
/* Programa que permite a leitura de um valor inteiro e apresenta o resultado 
do  cálculo da tabuada até 10 ara este valor */

#include<iostream>
#include<iomanip>

using namespace std;
int main(){
    int contador{0}, valor, resultado;

    cout << "laco de repeticao com condicao inicial\n\n";
    cout << "* informe valor desejado : " ; cin >> valor;
    cout << "n-> trabuada do "<< valor <<"\n\n";

    while(contador<=10){
        resultado = valor * contador;
        cout << setw(2) << valor;
        cout << " x ";
        cout << setw(2) << contador;
        cout << " = ";
        cout << setw(2) << resultado << "\n";

        ++contador;
    }
    cout << "\n\n";
    return 0; 
}