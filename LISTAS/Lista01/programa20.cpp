// programa 20
// Lista 01 programa20.cpp

#include<iostream>
using namespace std;

int main(){
    int n1, n2, n3, X;
    cout << " informe primeiro numero: "; cin >> n1;
    cout << " informe segundo numero.: "; cin >> n2;
    cout << " informe terceiro numero: "; cin >> n3;

    if (n1 < n2){
        X = n1;
        n1 = n2;
        n2 = X;
    }
    if (n1 < n3){
        X = n1;
        n1 = n3;
        n3 = X;
    }
    if(n2 < n3){
        X = n2;
        n2 = n3;
        n3 = X;
    }

    cout << " Numeros em ordem decresente" << endl;
    cout << n1 << "\n" << n2  << "\n" << n3 << "\n";

    return 0;
}