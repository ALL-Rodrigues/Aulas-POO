#include <iostream>
#include <iomanip>

using namespace std;

// Total de linhas e colunas
#define LINHAS 10
#define COLUNAS 4

// ------------------------------------------------------------------------------------
// Função principal
// ------------------------------------------------------------------------------------
int main() {
    cout << "\n";
    cout << "Exemplo de Array Bidimensional\n\n";

    // Declara as variáveis para controle dos laços
    int i, j;

    // Declara a matriz para entrada das notas
    // e média do aluno
    float notas[LINHAS][COLUNAS + 1];

    // Declara as varíaveis para calculo da média do aluno
    float soma;
    float media;

// ------------------------------------------------------------------------------------

    // Entrada das notas
    cout << "* Informe as " << COLUNAS << " notas dos " << LINHAS << " alunos:\n\n";

    // Loop para percorrer cada linhas da matriz
    for (i = 0; i < LINHAS; ++i) {
        cout << "Informe as notas do aluno " << i+1 << ": ";

        // Loop para entrada das notas
        for (j = 0; j < COLUNAS; ++j) {
            // Armazena a nota
            cin >> notas[i][j];
        }
    }

// ------------------------------------------------------------------------------------

    // Calculo da media

    // Loop para percorrer cada linha da matriz
    for (i = 0; i < LINHAS; ++i) {

        // Inicializa o somatório das notas do aluno
        soma = 0;

        // Loop para percorrer cada nota
        for (j = 0; j < COLUNAS; ++j) {

        // Atualiza o somatório das notas
        soma += notas[i][j];
        }

        // Calcula e armazena a média do aluno
        notas[i][COLUNAS] = soma / COLUNAS;
    }

// ------------------------------------------------------------------------------------

    // Apresentação do resultado

    // Formatação do resultado

    cout << setprecision(2);
    cout << setiosflags(ios::fixed);

    cout << "\n* Resultado final: \n\n";

    // Cabeçalho
    cout << setw(6) << "Aluno";

    for (j = 0; j < COLUNAS; ++j) {
        cout << setw(9) << "Nota " << j+1;
    }

    cout << setw(10) << "Media";
    cout << "\n\n";

    // Loop para percorrer cada linha da matriz
    for (i = 0; i < LINHAS; ++i) {

        // Número do aluno
        cout << setw(6) << i+1;

        // Loop para exibir as notas
        for (j = 0; j < COLUNAS; ++j) {

            // Notas do aluno
            cout << setw(10) << notas[i][j];
        }

        // Média do aluno
        cout << setw(9) << notas[i][COLUNAS];

        // Passa para a próxima linha da tabela
        cout << "\n";
    }

// ------------------------------------------------------------------------------------
    cout << "\n";

    // Fim do programa
    return 0;

}