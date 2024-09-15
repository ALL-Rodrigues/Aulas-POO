// exemplo de escopo estatico
// programa que demonstra a utilização de static.

#include<iostream>

using namespace std;

// prototipo dde função
void incremento();

//função principal
int main(){
    cout << "\n";
    // loop para demonstrar a utilização de static
    for(int i = 0; i < 5; ++i){
        cout << " i: " << i << " -- valor: ";
        incremento();
    }

    cout << "\n";

    //fim do programa
    return 0;
}

// definição de função
void incremento(){

    // definição da variavel estática
    static int valor = 0;

    //exibe seu valor
    cout << valor << "\n";

    //incrementa o valor da variável
    valor += 5;
}