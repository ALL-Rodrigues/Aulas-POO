// Programa 34
// Lista 01 programa34.cpp

#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;
int main(){
    float num, r;

    cout <<"\n";
    cout << " Informe um numero qualquer: "; cin >> num;
    r = num - (int)num;
    if(r == 0){
        cout << "Numero informado e um inteiro." << endl;
        cout << "Numero original: " << fixed << setprecision(2) << num << endl;
    }else{
        cout << "Numero informado e um decimal. " << endl;
        float aredondado = round(num);
        cout << " Numero original: " << fixed << setprecision(2)<< num << endl;
        cout << " Numero aredondado: " << fixed << setprecision(0) << num << endl;
    }
    cout << r; 
    return 0;
}
