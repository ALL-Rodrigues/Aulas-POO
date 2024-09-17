// Programa 29
// Lista 01 programa29.cpp

/*  Escreva um programa que peça a entrada dos valores correspondentes aos lados de um 
    triangulo. Em seguida, o programa deve verificar o tipo de triangulo que esses valores formam: 
    equilátero, isóceles ou escaleno. O programa também deve exibir uma mensagem, caso esses 
    valores não formem um triangulo. Considere as seguintes informações:
        a. três lados foraman um triângulo quando a noma de dois lados for maior que o terceiro lado;
        b. O triângulo equilátero possui três lados iguais;
        c. O triâmgulo isóceles possui dois lados iguais;
        d. O triângulo escaleno possui três lados diferentes. 
*/

#include<iostream>
using namespace std;
int main(){
    float lado1, lado2, lado3;

    cout << " informe lado 1 do triangulo: "; cin >> lado1;
    cout << " informe lado 2 do triangulo: "; cin >> lado2;
    cout << " informe lado 3 do triangulo: "; cin >> lado3;

    if(lado1 + lado2 > lado3 && lado1 + lado3 > lado2 && lado2 + lado3 > lado1){
        if(lado1 == lado2 && lado2 == lado3){
            cout << " Triangulo Equilatero.";
        } else if(lado1 == lado2 || lado2 == lado3 || lado1 == lado3){
            cout << " Triangulo Isoceles.";
        } else {
            cout << " Triangulo escaleno.";
        }
    } else {
        cout << " nao forma um triangulo com esses valores.";
    }

    return 0;
}