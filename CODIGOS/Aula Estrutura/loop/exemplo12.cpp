// exemplo 12 : de função

#include<iostream>
#include<iomanip>
using namespace std;

void incrementarPorValor(int num){
    ++num;
    cout << "Dentro da funcao: " << num << endl;
} 

int main(){
    int a = 5;
    incrementarPorValor(a);
    cout << "Fora da funcao: " << a << endl;
    return 0;
}