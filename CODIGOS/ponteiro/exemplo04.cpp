// exemplo 03
// exemplo de passagem por valor

#include<iostream>
using namespace std;

//prototipo de função
void elevaCubo(int *nPtr);

// função principal
int main(){

    cout << "\n";
    cout << " Exemplo de passagem por referencia com ponteiro\n\n";

    // declara e inicializa a variavel
    int numero = 5;

    // exibe seu valor original
    cout << "* Valor original: " << numero << "\n";

    // chama a função que eleva ao cubo, passando o argumento por referencia
    elevaCubo(&numero);

    // exibe seu valor modificado
    cout << "* Valor modificado: " << numero << "\n\n";

    // fim do programa 
    return 0;
}

// definição das funções

// calcula e retorna o cubo de um argumento inteiro
void elevaCubo(int *nPtr){
    *nPtr = *nPtr * *nPtr * *nPtr;
}