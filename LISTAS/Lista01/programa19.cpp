// Programa 19
// Lista 01 programa19.cpp

#include<iostream>
using namespace std;

int main(){
    char letra;
    cout << " Informe uma letra: "; cin >> letra;
    letra = toupper(letra);

    if(letra == 'A' || letra == 'E' || letra == 'I' || letra == 'O' || letra == 'U'){
        cout << "A letra " << letra << " e uma vogal. ";
    } else {
        cout << "A letra " << letra << " e uma consoante. ";
    }
    return 0;
}