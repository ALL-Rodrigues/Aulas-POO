// Programa 56.
// lista 02 progrma56.cpp
/*  A série de fibonacci é formada pela sequência 1, 1, 2, 3, 5, 8, 13, 21, 34, 55,..... 
    Escreva um programa capaz de gerar a série de fibonacci, até o n-ésimo termo. O programa deve 
    solicitar ao usuário a entrada da quantidade de termos desejados. 
*/

#include<iostream>
using namespace std;
int main(){
    int termo, n1, n2, n3;
    cout << "Entre com o termo: "; cin >> termo;
    n1 = 0; 
    n2 = 1;
    cout << n1 << ", " << n2 << ", "; 

    for(int i = 2; i < termo; ++i){
        n3 = n1 + n2;
        cout << n3 << ", ";
        n1 = n2;
        n2 = n3;
    }
    return 0;
}