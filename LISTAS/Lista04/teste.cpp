#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> arr; 
    char x;
    int v = 0;

    do {
        int valor;
        cout << "Informe numeros: ";
        cin >> valor; 
        if (valor > v) {
            v = valor;
        }
        arr.push_back(valor); 

        cout << "Deseja inserir outro valor? (s/n): ";
        cin >> x; 
    } while (x == 's' || x == 'S');

    cout << "Valores inseridos: ";
    for (int i = 0; i < arr.size(); i++) {
        cout << arr[i] << (i < arr.size() - 1 ? ", " : ""); 
    }
    cout << endl;

    cout << "Histograma Horizontal" << endl;
    for (int i = 0; i < arr.size(); i++) {
        cout << i + 1 << "|";
        for (int j = 0; j < arr[i]; j++) {
            cout << " *";
        }
        cout << endl;
    }
    cout << " + ---------------" << endl;
    cout << "0|";

    for (int i = 0; i < v; i++) {
        cout << i+1  << " "; 
    }
    cout << endl; 

    return 0; 
}
