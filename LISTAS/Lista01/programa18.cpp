// programa 18 
// Lista 01 programa18.cpp

#include<iostream>
using namespace std;

int main(){
    int n1;
    cout << "Digite o primeiro numero: ";
    cin >> n1;

    if (n1 > 0) {
        cout << "O numero " << n1 << " informado e positivo." << endl;
    } else {
        cout << "O numero " << n1 << " informado e negativo." << endl;
    }

    return 0;
}