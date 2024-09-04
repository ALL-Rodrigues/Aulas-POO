#include <iostream>

using namespace std;

int main() {
    int n = 10; 
    int contador = 0; 
    
    for (int i = 0; i < n / 2; ++i) {
        int j = 1;
        while ((j + (n / 2)) <= n) {
            int k = 1; 
            while (k <= n) {
                contador++; 
                k *= 2; 
            }
            j++; 
        }
    }
    
    cout << contador; 
    return 0;
}
