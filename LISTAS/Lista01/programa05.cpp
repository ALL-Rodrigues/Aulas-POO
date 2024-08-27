// Programa 05
// Lista 01 programa05.cpp

#include<iostream>
#include<iomanip>
using namespace std;
int main(){
  float f, k, c;
  cout << "informe temperatura em celcius: ";
  cin >> c;
  f = (9 * c + 160) / 5;
  k = c + 273.15;
  cout << "temperatura em fahrenheit e " << f << endl;
  cout << "temperatura em kelvin e " << k << endl;
  return 0;
}

