// exempo de função

#include<iostream>
using namespace std;

// definição de função
int soma(int a, int b =0){
    return a + b;
}

//função principal
int main(){
    int resultado = soma(5, 3);
    cout << " A soma e: " << resultado << endl;
    return 0;
}