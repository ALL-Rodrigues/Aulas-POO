// Programa 42
// Lista 02 programa42.cpp
/* Escreva um programa que imprima na tela os números de 1 a 20, um abaixo do outro. Depois modifique o programa para que ele mostre os números um do lado do outro. */

#include<iostream>
#include <cstdlib>
using namespace std;
int main(){
    for(int i = 1; i <= 20; ++i){
        cout << i << endl;
    }

    cin.get();
    system("cls");
    
    for(int i = 1; i <= 20; ++i){
        cout << i << ", ";
    }
    return 0;
}