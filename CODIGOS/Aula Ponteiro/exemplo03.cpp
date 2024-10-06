// exemplo 03
// exemplo de passagem por valor

#include<iostream>
using namespace std;

//prototipo de função
int elevaCubo(int n);

// função principal
int main(){

    cout << "\n";
    cout << " Exemplo de passagem por valor\n\n";

    // declara e inicializa a variavel
    int numero = 5;

    // exibe seu valor original
    cout << "* Valor original: " << numero << "\n";

    // chama a função que eleva ao cubo, passando o argumento por valor
    numero = elevaCubo(numero);

    // exibe seu valor modificado
    cout << "* Valor modificado: " << numero << "\n\n";

    // fim do programa 
    return 0;
}

// definição das funções

// calcula e retorna o cubo de um argumento inteiro
int elevaCubo(int n){
    return n * n * n;
}