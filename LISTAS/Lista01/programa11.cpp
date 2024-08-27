// Programa 11
// Lista programa11.cpp

#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int nun1, nun2;
    float nun3, P, S, R;

    cout << "informe Numero Inteiro 1: "; cin >> nun1;
    cout << "informe Numero Inteiro 2: "; cin >> nun2;
    cout << "informe Numero Real: "; cin >> nun3;

    P = (nun1 * 2) + (nun2/2);
    S = (nun1 * 3) + nun3;
    R = pow(nun3, 3);

    cout << "\n\n";
    cout << " a. O produto do dobro do primeiro com metade do segundo: " << P << endl;
    cout << " b. A Soma do Triplo do primeiro com o terceiro: " << S << endl;
    cout << " c. O terceiro elevado ao cubo: " << R << endl;

    return 0;

}