// EXEMPLO 07: PROGRAMA PARA DEMONSTRAR O USO DE ENUMERAÇÃO COM ESCOPO

#include<iostream>
using namespace std;

// enumeração para controlar o estado de um jogo
enum class EstadoJogo {
    MenuPrincipal,
    Jogando,
    Pausado,
    GameOver
};

// prototipos de funções
void mostrarEstado(EstadoJogo estado);

// função principal
int main(){
    cout << endl;
    cout << "* Exemplo de Enumeracao\n\n";

    // declara o enumerador, inicializado que o jogo esta no menu principal
    EstadoJogo estadoAtual = EstadoJogo::MenuPrincipal;

    // mostra o estado inicial do jogo 
    mostrarEstado(estadoAtual);

    //-----------------------------------------------------------------------
    // simula o inicio do jogo
    estadoAtual = EstadoJogo::Jogando;

    mostrarEstado(estadoAtual);
    //---------------------------------------------------------------------------

    cout << endl;

    // fim do programa
    return 0;
}

// definição de funções
// função para exibir o estado do jogo
void mostrarEstado(EstadoJogo estado){
    switch (estado)
    {
    case EstadoJogo::MenuPrincipal:
        cout << "Voce esta no menu principal." << endl;
        break;

    case EstadoJogo::Jogando:
        cout << ">> O jogo essta em andamento." << endl;
        break;

    case EstadoJogo::Pausado:
        cout << ">> O jogo esta Pausado." << endl;
        break;

    case EstadoJogo::GameOver:
        cout << ">> Game Over! " << endl;
        break;

    default:
        cout << ">> Estado desconhecido." << endl;
        break;
    }
}

