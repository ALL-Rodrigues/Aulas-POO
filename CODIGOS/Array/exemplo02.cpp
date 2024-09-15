// exemplo 02: exemplo do array bidmensional
// programa que demonstra como utilizar uma matriz para a entrada de notas

#include<iostream>
#include<iomanip>

using namespace std;

#define LINHAS 10
#define COLUNAS 4  

int main(){
    cout << "\n\n";
    cout << "Exemplo de array bidimensional\n\n";

    //declara as variaveis para controle dos laços
    int i, j;

    //declara a matriz para entrada das notas e da media do aluno
    float notas[LINHAS][COLUNAS + 1];
     
    // declara as variáveis para calculo da media do aluno
    float soma;
    float media;

    // entrada das notas
    cout << "* Informe as " << COLUNAS << " notas dos " << LINHAS << " alunos:\n\n";

    // loop para percorrer cada linha da metriz
    for( i = 0; i < LINHAS; ++i){
        cout << "Informe as notas do aluno " << i+1 << ": ";

        // loop para a entrada das notas
        for(j = 0; j < COLUNAS; ++j){
            cin >> notas[i][j];
        } 
    }
    // calculo da media
    // loop para percorrer cada linha da matriz
    for(i = 0; i < LINHAS; ++i){

        //inicializa o soamtorio das notas do aluno 
        soma = 0;

        // loop para percorrer cada nota
        for(j= 0; j <COLUNAS; ++j){
            soma += notas[i][j];
        }

        // calcula e armazena a media do aluno
        notas[i][COLUNAS] = soma / COLUNAS;
    }

    // apresentação do resultado
    // formatação do resultado
    cout << setprecision(2);
    cout << setiosflags(ios::fixed);

    cout << "\n* Resultado Final: \n\n";

    // cabeçalho
    cout << setw(6) << "Aluno";
    
    for(j = 0; j < COLUNAS; ++j){
        cout << setw(9) << "notas " << j+1;
    }
    cout << setw(10) << "media";
    cout << "\n\n";

    //loop para percorrer cada linha da matriz
    for(i=0; i<LINHAS; ++i){

        //numero do aluno
        cout << setw(6) << i+1;

        //loop para exibir as notas
        for(j=0; j<COLUNAS; ++i){

            //notas do aluno
            cout << setw(10) << notas[i][j];
        }
        // Média do aluno
        cout << setw(9) << notas[i][COLUNAS];

        // passa para a proxima linha da tabela
        cout << "\n";
    }
    cout << "\n";

    // fim do programa
    return 0;
}