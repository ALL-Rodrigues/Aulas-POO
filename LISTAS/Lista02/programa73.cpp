// Programa 73
// Lista 02 programa73.cpp
/* Escreva um programa que solicite a entrada de um inteiro N e utilize uma função para exibir o seguinte padrão.
    1
    1, 2
    1, 2, 3
    ......
    1, 2, 3, ......, N, 
*/

#include<iostream>
#include<iostream>
#include<string>
using namespace std;
int main(){
    int N, S;
    cout << "Entre um numero: "; cin >> N;
    for(int i = 0; i <= N; ++i){
        for(int j = 0; j < i; ++j){
            S = S + 1;
            cout << S;
            cout << ",";
        }
        cout << endl;
        S = 0;
    }
    return 0;
}

