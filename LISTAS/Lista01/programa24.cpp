// Programa24
// Lista 01 programa24.cpp

#include<iostream>
using namespace std;
int main(){
    int n, r;
    cout << "informe um numero: "; cin >> n;
    r = n % 2;
    if (r == 0){
        cout << " O numero " << n << " e par." << endl;
    }else{
        cout << " O numero " << n << " e impar." << endl;
    }
    return 0;
}