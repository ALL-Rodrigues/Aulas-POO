// programa 26
// Lista 01 programa26.cpp

#include<iostream>
#include<string>
using namespace std;
int main(){
    string produto[3];
    float preco[3];

    for(int i = 0; i < 3; ++i){
        cout << "informe o nome do produto: "; cin >> produto[i];
        cout << "informe o preço de compra do produto: "; cin >> preco[i];
    }

    float menorPreco = preco[0];
    int indiceMenorPreco = 0;

    for(int i = 1; i < 3; ++i){
        if(preco[i] < menorPreco){
            menorPreco = preco[i];
            indiceMenorPreco = i;
        }
    }
    cout << " O produto " << produto[indiceMenorPreco] << " deve ser compredado pelo preco " << menorPreco << "Reais." << endl; 

    return 0;
}