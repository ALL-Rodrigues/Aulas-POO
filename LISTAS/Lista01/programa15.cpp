// Programa 15
// Lista 01 programa15.cpp

#include<iostream>

using namespace std;

int main(){
    cout << "f";
    float horasTrabalhadas, valorHora, bruto, ir, inss, sindicato, liquido;
    cout << " Informe o valor da hora de trabalho: ";
    cin >> valorHora;
    cout << " Informe a quantidade de horas trabalhadas no mes: ";
    cin >> horasTrabalhadas;

    bruto = valorHora * horasTrabalhadas;
    ir = bruto * 0.11;
    inss = bruto * 0.08;
    sindicato = bruto * 0.05;
    liquido = bruto - (ir + inss + sindicato);

    cout << "=> CALCULO SALARIAL\n\n";
    cout << "+ Salario Bruto..: R$ " << fixed << setprecision(2) << bruto << endl;
    cout << "- IR (11%).......: R$ " << fixed << setprecision(2) << ir << endl;
    cout << "- INSS (8%)......: R$ " << fixed << setprecision(2) << inss << endl;
    cout << "- Sindicato (5%).: R$ " << fixed << setprecision(2) << sindicato << endl;
    cout << "= Salario Liquido: R$ " << fixed << setprecision(2) << liquido << endl;
    cout << "\n\n";

    return 0;
}
