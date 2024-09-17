// Programa 27
// Lista 01 programa27.cpp

#include<iostream>
#include<iomanip>
using namespace std;

int main(){
    float salario, reajuste, aumento, porcentagem;
    
    cout << "\n";
    cout << " Programa Reajuste Salarial.\n\n";

    cout << " Informe o valor do seu salario: "; cin >> salario;
    
    if(salario < 2000){
        reajuste = salario * 0.20;
    } else if (salario >= 2000 && salario < 4000){
        reajuste = salario * 0.15;
    } else if (salario >= 4000 && salario < 8000){
        reajuste = salario * 0.10;
    } else {
        reajuste = salario * 0.05;
    }

    aumento = salario + reajuste;
    porcentagem = ((reajuste / salario) * 100);

    cout << " Salario antes do reajuste.............: " << fixed << setprecision(2) << salario <<  endl;
    cout << " Percentual de aumento que foi aplicado: " << fixed << setprecision(0) << porcentagem << "%." << endl;
    cout << " Valor do aumento......................: " << fixed << setprecision(2) << reajuste << endl;
    cout << " Novo Salario, apos o aumento..........: " << fixed << setprecision(2) << aumento << endl;
    cout << "\n";


    return 0;
}