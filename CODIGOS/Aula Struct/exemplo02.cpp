// exemplo 01: programa que demonstra como declarar estrutura com funçoes

#include<iostream>
using namespace std;

// definição da estrutura ponto
// ela é utilizada para armazenar pontos de uma cordenada
struct ponto {
    int x;
    int y;

    // função para definir as cordenadas do ponto
    void defineCoordenadas(int px, int py){
        x = px;
        y = py;
    };

    // função exibir as cordenadas do ponto
    // modificador const indica que ela não modifica os membros da estrutura
    void exibeCoordenadas(string P) const {
        cout << "Coordenadas do ponto " << P << ": (" << x << ", " << y << ")\n";
    }
};

// função principal
int main(){
    cout << "\n";
    cout << "Declaracao de estrutura com atributos e funcoes\n\n";

    // eclaração de variavel do tipo ponto
    ponto p1;

    // executa a função que define as coordenadas do ponto
    p1.defineCoordenadas(10, 20);

    // executa a função que exibe as coordenadas do ponto
    p1.exibeCoordenadas("P1");

    cout << endl;

    // fim do programa
    return 0;
}