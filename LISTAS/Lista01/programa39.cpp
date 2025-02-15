// Programa 39
// Lista 01 priograma39.cpp

/*  Escreva um programa que receba o valor de três ângulos de um triangulo. em seguida, o programa deve 
    informar se o triangulo é acutângulo, retângulo ou obtusângulo. considere as seguintes informações: 
    a. Triangulo Retângulo   : Possui um angulo reto (igual a 90°);
    b. Triangulo Obtusângulo : Possui um ângulo obtuso (maior que 90°);
    c. Triangulo Acutângulo  : Possui três ângulos agudos (menores que 90°). 
*/

#include<iostream>
#include<cstdlib>
#include<iomanip>
#include<string>

using namespace std;

int main(){

    cout << "Programa Calculo de Triangulo:\n\n";

    int anguloA, anguloB, anguloC, r;

    cout << "Informe o Angulo A: "; cin >> anguloA;
    cout << "Informe o Angulo B: "; cin >> anguloB;
    cout << "Informe o Angulo C: "; cin >> anguloC; 

    cout << "\n";

    r = anguloA + anguloB + anguloC;

    if(r == 180){
      if(anguloA == 90 || anguloB == 90 || anguloC == 90){
          cout << "Tringulo Retangulo.";
        }else if(anguloA > 90 || anguloB > 90 || anguloC > 90){
          cout << "Triangulo Obtusangulo.";
        }else if(anguloA < 90 & anguloB < 90 & anguloC < 90){
          cout << "Triangulo Acutangulo.";
        }
    }else{
      cout << "valores dos angulos somados nao da 180. tente novamente.";
    }
  
    return 0;
}