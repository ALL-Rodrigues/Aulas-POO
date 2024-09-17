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
using namespace std;
int main(){
    float a, b, c, r;
    cout << "informe o valor de a: "; cin >> a;
    cout << "informe o valor de b: "; cin >> b;
    cout << "informe o valor de c: "; cin >> c;


    return 0;
}