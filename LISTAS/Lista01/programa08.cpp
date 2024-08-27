// Programa 08
// Lista 01 programa08.cpp

#include<iostream>
#include<iomanip>
using namespace std;

const float pi = 3.141516;

int main(){
  float V, R, A;
  cout << "Informe o valor do raio da circunferencia da lata de oleo: "; cin >> R;
  cout << "Informe o valor da altura da circunferencia da lata de oleo: "; cin >> A;
  V = pi * (R * R) * A; 
  cout << "o volume da lata de oleo e: "<< fixed << setprecision(2) << V << "\n\n";
  
  return 0;
}