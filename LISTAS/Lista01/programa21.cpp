// Programa 21
// Lista 02 programa21.cpp
/*  Escreva um programa que pergunte em que turno o usuário estuda. Peça para digitar M para
    matutino, V para vespertino ou N para noturno. Em seguida, imprima a mensagem "Bom dia!",
    "Bom tarde!", "Boa noite!" ou "invalido!", de acordo com a entrada do usuario. 
*/
#include<iostream>
#include<cctype>
using namespace std;
int main(){
    char letra;
    cout << " Qual o turno que voce estuda(M/V/N): "; cin >> letra;
    letra = toupper(letra);
    cin.ignore(80, '\n');
    if (letra != 'M' && letra != 'V' && letra != 'N') {
        cout << " INVALIDO! informe caractere correspondente. "<< endl;
    } else {
        switch (letra){
        case 'M':
            cout << " Bom dia!" << "\n";
            break;
        case 'V':
            cout << " Boa tarde!" << "\n";
            break;
        case 'N':
            cout << " Boa noite!" << "\n";
            break;
        }
    }

    return 0;
}