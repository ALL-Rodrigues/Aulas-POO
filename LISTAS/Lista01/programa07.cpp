// Programa 07
// Lista 01 programa07.cpp

#include<iostream>
#include<iomanip>
using namespace std;
int main(){
  float F, K;

  cout << "\n\n";
  cout << " Informe a temperatura em Fahrenheit: "; cin >> F;
  K = (F - 32)* 5/9 + 273.15;
  cout << " A temperatura em Kelvin e: " << fixed << setprecision(2) << K << endl;
  
  return 0;
}