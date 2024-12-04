// exemplo 09: Cálculo de MDC utilizando o DO WHILE

/*  Considere o seguinte cénario " Em um jogo para duas ou mais pessoas, existem X pecas quadarasdas e Y pecas treiangulasres 
    sabendo que, para jogar essa jogo, as pecas precisam ser igualmente distribuidas e não pode sobrar nenhuma delas, qual é maximo 
    de participantes possiveis no jogo?" 
    escreva um programa para resolver este problema. */

#include<iostream>
#include<iomanip>
using namespace std;

int main(){
    int quadradas, triangulares, a, b, r;

    cout <<"\n\n";
    cout << "Calculo do numero maximo de participantes de um jogo\n\n";
    cout << "* informe o total de pecas quadradas: ";    cin >> quadradas;
    cout << "* informe o total de pecas triangulares> "; cin >> triangulares;

    a = quadradas;
    b = triangulares;

    do{
        r = a % b;
        a = b;
        b = r;

    }while(b != 0);

    cout << "\n=> Considerando " << quadradas << " pecas quadradas e ";
    cout << triangulares << " pecas treiangulares, devemos ter no maximo ";
    cout << a << " participantes.\n\n";

    return 0;
}