// Programa 10
// Lista programa10.cpp

#include<iostream>
using namespace std;

int main(){
    int A, B, X;
    
    cout << " Informe valor para A: "; cin >> A;
    cout << " Informe valor para B: "; cin >> B;

    cout << "\n\n";
    cout << " Valor de A antes da troca:  " << A << endl;
    cout << " Valor de B antes da troca:  " << B << endl;

    X = A;
    A = B;
    B = X;

    cout << " Valor de A depois da troca: " << A << endl;
    cout << " Valor de B depois da troca: " << B << endl; 
    cout << "\n\n";

 return 0;   
    
}