// Programa 17
// Lista 01 programa17.cpp

#include<iostream>
using namespace std;

int main(){
    int n1, n2;
    cout << "Digite o primeiro numero: ";
    cin >> n1;
    cout << "Digite o segundo numero: ";
    cin >> n2;
    if (n1 > n2) {
        cout << "O maior numero e: " << n1 << endl;
    } else {
        cout << "O maior numero e: " << n2 << endl;
    }

    return 0;
}