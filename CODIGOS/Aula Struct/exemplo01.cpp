// exemplo 01: programa que demonstra como declarar estrutura

#include<iostream>
using namespace std;

// definição da estrutura ponto
// ela é utilizada para armazenar pontos de uma cordenada
struct ponto {
    int x;
    int y;
};

// função principal
int main(){
    cout << "\n";
    cout << "deDeclaracao de estruturas\n\n";

    // eclaração de duas variaveis do tipo ponto
    ponto p1;
    ponto p2;

    // atribuição de valores aos membros da primeira estrutura 
    p1.x = 10;
    p1.y = 20;

    // atribuição de valores aos membros da segunda estrutura
    p2.x  = 0;
    p2.y = 100;

    // acesso aos membros das estruturas
    cout << "Coordenadas do ponto P1: (" << p1.x << ", " << p1.y << ")\n";
    cout << "Coordenadas do ponto P2: (" << p2.x << ", " << p2.y << ")\n\n";

    // fim do programa
    return 0;
}