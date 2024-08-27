// Programa 03
// Lista 01 programa03.cpp

#include<iostream>
#include<iomanip>
using namespace std;
int main(){

    float n1, n2, n3, n4, media;
    cout << "informe nota 1: ";  cin >> n1;
    cout << "informe nota 2: ";  cin >> n2;
    cout << "informe nota 3: ";  cin >> n3;
    cout << "informe nota 4: ";  cin >> n4;

    media = (n1 + n2 + n3 + n4) / 4;

    cout << "media final...: " << fixed << setprecision(2) << media << endl;

    return 0;    
}