#include <iostream>
#include <vector>
#include <sstream> 
using namespace std;

int main() {
    vector<int> array; 
    string input;

    cout << "Informe os numeros desejados (separados por espaco): ";
    getline(cin, input); 

    istringstream stream(input);
    int num;
    while (stream >> num) {
        array.push_back(num); 
    }

    cout << "Histograma Horizontal" << endl;

    for (int i = 0; i < array.size(); i++) {
        cout << i+1 << " | ";
        for (int j = 0; j < array[i]; j++) { 
            cout << "*  ";   
        }
        cout << endl;
    }  

    int maxValue = 0;
    for (int value : array) {
        if (value > maxValue) {
            maxValue = value;
        }
    }

    cout << "  + - - - - - - - - - -\n";
    for (int i = 0; i <= maxValue; i++) {
        cout << i << "  ";
    }
    cout << endl;

    return 0;
}