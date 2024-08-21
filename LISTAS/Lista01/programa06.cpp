#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    
 float TEMPO, VELOCIDADE, DISTANCIA, QUANTIDADE_KILOMETROS_LITROS;

  cout << "\n\n";
  cout << "Informe o tempo gasto na viagem em horas: "; cin >> TEMPO;
  cout << "Iforme a velocidade media durante a viagem em km/h: "; cin >> VELOCIDADE;
  cout << "Informe a quantidade de litros que o carro consome por km: "; cin >> QUANTIDADE_KILOMETROS_LITROS;

  DISTANCIA = TEMPO * VELOCIDADE;

  cout << "\n\n";
  cout << "A velocidade media durante a viagem foi de: " << fixed << setprecision(2) << VELOCIDADE << " km/h."<<endl;
  cout << "O tempo gasto na viagem foi de: "             << fixed << setprecision(2) << TEMPO << " horas."<<endl; 
  cout << "A distancia percorrida total foi de: "        << fixed << setprecision(2) << DISTANCIA << " km/h"<<endl;
  cout << "A quantidade de litros consumido foi de: "    << fixed << setprecision(2) << DISTANCIA/QUANTIDADE_KILOMETROS_LITROS << " litros."<<endl;
  cin.get();
  return 0;
}