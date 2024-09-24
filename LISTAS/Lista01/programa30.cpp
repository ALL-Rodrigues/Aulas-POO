// Programa 30
// Lista 01 programa30.cpp
/*  Escreva um programa que calcule as raizes de uma equação do segundo grau, na forma
    ax² + bx + c. O programa deverá solicitar a entrada dos valores de a, b, c, verificando as 
    seguintes situações:
        1. Se o usuário informar o valor de a igual a zero, a equação não é do segundo grau. O 
        programa deve informar essa situação para o usuário e ser finalizado;
        2. se o valor calculado para o delta for negativo, a equação não possui raizes reais. O 
        programa deve informar essa situação para o usuario e ser finalizado;
        3. Se o valor calculado para o delta for igual a zero for igual a zero a equação possui apenas uma raiz
        real. O programa deve informar essa situação para o usuario e exibir o valor dessa raiz, antes 
        de ser finalizado;
        4. Se o valor calculado para o delta for positivo, a equação possui duas raizes reais. O programa 
        deve informar essa situação para o usuário e exibir os valores dessas raizes, antes de ser finalizado; 
*/

#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;
int main(){
    float a, b, c, delta, x1, x2;
    cout << "informe o valor de a: "; cin >> a;
    cout << "informe o valor de b: "; cin >> b;
    cout << "informe o valor de c: "; cin >> c;

    if(a == 0){
        cout << " A funcao nao e do 2° grau. "<< endl;
    } else {
        delta = pow(b, 2) - 4 * a * c;
        if(delta < 0){
            cout << "Nao possui raizes reais por ser menor que 0." << endl;
        } else if(delta == 0){
            x1 = -b / (a * 2);
            cout << "A equacao so pode ter uma raiz real: " << x1 << "." << endl;
        } else {
            //x1 = -b / (a * 2);
            //x2 = -b / (a * 2);
            x1 = (-b + sqrt(delta)) / (2 * a);
            x2 = (-b - sqrt(delta)) / (2 * a);
            cout << "as raizes da equacao sao: x1 = " << x1 << " e x2 = " << x2 << endl;
        }
    }

    return 0;
}