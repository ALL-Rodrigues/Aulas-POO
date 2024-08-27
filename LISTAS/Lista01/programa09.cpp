// Programa 09
// Lista programa09.cpp

#include<iostream>
#include<iomanip>
using namespace std;

const float pi = 3.141516;

int main(){
  float P, D, R;
  cout << "Digite o valor do densidade: "; cin >> D;
  cout << "informe o valor do raio: "; cin >> R;
  P = D * 4 * pi * (R * R * R) / 3;
  cout << "O valor do peso da esfera e: " << fixed << setprecision(2)  << P << endl;
  
  return 0;
}