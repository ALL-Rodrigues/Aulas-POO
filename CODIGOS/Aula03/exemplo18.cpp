// exemplo 15: exemplo de register
// programa que demonstra a utilização de register.

#include<iostream>

using namespace std;

int main(){
    // declaraação de variaveis utilizando register
    register int i;

    cout << "\n";

    // loop para demonstrar a utilização de register
    for (i = 0; i<5; ++i){
        cout << " Valor do contador: " << i << "\n";
    }

    cout << "\n";

    // fim do programa
    return 0;
}