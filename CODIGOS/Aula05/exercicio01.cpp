// 
//

#include<iostream>
#include<iomanip>
#include<string>
using namespace std;

// Total de Nomes
#define TAM 10

// Protótipo de função
void trocar(string& a, string& b);
int particao(string dados[], int menor, int maior);
void quickSort(string dados[], int menor, int maior);

// função principal
int main(){
    cout << "\n";
    // cout << " exemplo de array de string\n\n";
    cout << "exemplo: quick sort\n\n"; 

    //variaveis de controle da saida
    int i;

    // declara um array para armazenar os nomes
    string nomes[TAM];

    // loop que realiza a entrada dos nomes
    for(i = 0; i < TAM; ++i){
        cout << "informe o nome " << i+1 << ": ";
        getline(cin, nomes[i]);
    }
    cout << "\n";

    // Imprimindo os nomes antes da ordenação
    cout << "Nomes antes da ordenacao:\n\n";

    i = 1;
    for(const auto& nome : nomes){
        cout << setw(2) << i << "." << nome << endl;
        ++i;
    }

    // ordena os nomes utilizando o quick sort
    quickSort(nomes, 0, TAM - 1);

    cout << "\n";

    // imprimindo os nomes depois da ordenação
    cout << "Nomes depois da ordenacao:\n\n";

    i = 1;
    for(const auto& nome : nomes){
        cout << setw(2) << i << "." << nome << endl;
        ++i;
    }

    cout << "\n";

    //fim do programa
    return 0;
}

// funçao para trocar o valor de duas strings
void trocar(string& a, string& b){
    string temp = a;
    a = b;
    b = temp;
}

// função de partição, que coloca o pivo no lugar correto e organiza os elementos menores que o pivo esqueda e os maiores á direita
int particao(string dados[], int menor, int maior){

    // escolle o ultimo elemento para ser o pivo
    string pivo = dados[maior];

    // indice do ultimo elemento cujo valor é menor do que o pivo
    int i = menor - 1;

    // loop para organizar os elementos em relação ao pivo
    for(int j = menor; j < maior; ++j){
        // move todos os elementos menores que o pivo para a 
        // parte esquerda do array de string
        if(dados[j] < pivo){
            ++i;
            trocar(dados[i], dados[j]);
        }
    }

    // depois que o pivo termina, todos os elementos menores que o 
    // pivo estão á esquerda e todos os elementos maiores estão á direita 
    // porem, o pivo ainda esta na ultima  posição (maior).
    // assim, trocamos o pivo com o elemento na posição i + 1,
    // Para coloca-lo na posição correta 
    trocar(dados[i+1], dados[maior]);

    // retorna o indice do pivo, em sua posição correta dentro do array
    return i+1;
}

// função quick sort
void quickSort(string dados[], int menor, int maior){
    //verifica se o array possui ao menos um elemento
    if(menor < maior){
        // divide os elemntos dentro dos arrays antes e depois da particao
        int pivo = particao(dados, menor, maior);

        // ordena os elementos dentro dos arrays antes e depois da particao
        quickSort(dados, menor, pivo - 1);
        quickSort(dados, pivo + 1, maior);
    }
}