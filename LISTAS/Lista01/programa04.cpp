// Programa 04
// Lista 01 exec04.cpp 

#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    int horasTrabalhadas;
    float valorHora, total;
    string mes;
    cout << " Informe o valor da hora de trabalho.: ";    cin >> valorHora;
    cout << " Informe o tatal de horas trabalhadas: ";    cin >> horasTrabalhadas;
    cout << " Informe o Mes.: ";                          cin >> mes;
    cout << "\n\n";
    total = valorHora * horasTrabalhadas;
    cout << " Salario do mes de " << mes << ": " << fixed << setprecision(2) << total << "." << endl;
    return 0;
}