// exemplo 03: Programa para armazenar notas de alunos

#include<iostream>
#include<iomanip>
#include<string>
#include<vector>        // Permite o uso de vector
#include<algorithm>     // Permite o uso da função sort();
#include<sstream>       // Manipulador de cadeias de caracteres

using namespace std;

// estrutura para cadastrar os dados dos alunos
struct Cadastro{
    string nome;
    vector<float> notas; // 
    float media;
};

// protótipos das funções
float calculaMedia(const vector<float> &notas);
bool compararNomes(const Cadastro &a, const Cadastro &b);

// programa principal
int main(){
    cout << "\n";
    cout << "* Cadastro de Notas Escolares\n\n";

    // vetor para armazenar os cadastros dos alunos
    vector<Cadastro> alunos;

    // total de alunos
    int totalAlunos;

    // total de notas
    int totalNotas;

    // Media global da turma
    float mediaGlobal = 0.0f;

    // contadores
    int i, j;

    // entrada do total de alunos e do total de notas
    cout << ">> Informe o total de alunos: "; cin >> totalAlunos;

    cout << "\n";

    cout << ">> Informe o total de notas: ";  cin >> totalNotas; 

    cout << endl;

    // cadastro dos dados de cada aluno
    // loop para cadastrar os alunos
    for(i = 0; i < totalAlunos; ++i){
        // estrutura para cadastro dos alunos dados do aluno
        Cadastro aluno;

        cout << ">> Informe o nome do aluno: "<< i+1 << ": ";

        // entrada do nome do aluno
        // ignora os espaços em branco deixando no bufer
        getline(cin >> ws, aluno.nome);

        cout << ">> Informe a linha com as "<< totalNotas << " notas: ";

        // variavel para armazenar a linha com as notas
        string linhaNotas;

        // entrada da linha de notas
        getline(cin, linhaNotas);

        // extrair as notas da linha
        istringstream stream(linhaNotas);

        // variavel para armazenar a nota
        float notaTemp;

        // extrai cada nota da linha e insere no vetor de notas,
        // dentro da estrutura Cadastro
        while (stream >> notaTemp){
            aluno.notas.push_back(notaTemp);
        }
        
        // calcula e atribui a média do aluno
        aluno.media = calculaMedia(aluno.notas);

        // adicionar o cadastro do aluno dentro do vector de alunos
        alunos.push_back(aluno);/// */*/*

        // atualiza as informações sobre a média global da turma
        mediaGlobal += aluno.media;

        // pula uma linha entre cada aluno
        cout << endl;
    }

    // calcula a media global da turma
    mediaGlobal /= totalAlunos;

    // ececuta a função para ordenar os cadastro dentro do vetor 
    // no caso, realiza a ordenação de acordo com os nomes cadastrados
    sort(alunos.begin(), alunos.end(), compararNomes);

    // apresenta o resultado

    // formata a exibição do resultado 
    cout << setprecision(2);
    cout << setprecision(ios::fixed);

    cout << "* Resultado final\n\n";

    // loop para calcular os alunos cadastrados no vetor de alunos
    for(const auto& aluno : alunos){
        // exibe o nome do aluno
        cout << "Aluno: " << aluno.nome << endl;
        cout << "Notas: ";

        // exibe as notas do aluno
        for(float nota : aluno.notas){
            cout << nota << "  ";
        }

        // exibe a media do aluno
        cout << "\nMedia: " << aluno.media << endl;

        // pula uma linhaentre os dados de cada aluno
        cout << endl;
    }

    // exibe a media global da turma 
    cout << "* media global da turma: " << mediaGlobal << "\n\n";

    // fim do programa
    return 0;
}

// definição de funções 

// função para calculara media das notas dos alunos
float calculaMedia(const vector<float> &notas){
    float soma = 0.0f;

    // loop pque percorre as notas do aluno
    for(float nota : notas){
        soma += nota;
    }

    // retorna a media do aluno
    return soma / notas.size();
}

// função de comparação, para ordenar duas estruturas pelo atributo nome
bool compararNomes(const Cadastro &a, const Cadastro &b){
    return a.nome < b.nome;
}