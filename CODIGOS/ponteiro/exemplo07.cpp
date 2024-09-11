// Em=xemplo 07: relacionamento entre arrays e ponteiros

#include<iostream>
#include<string>

using namespace std;

// prototipos das funções
void imprime1(int numeros[], size_t tamanho, string nome);
void imprime2(int numeros[], size_t tamanho, string nome);

// função principal
int main(){
    cout << "\n";
    cout << "relacionamento entre Arrays e Ponteiros\n\n";

    // declaração e inicialização de tres arrays
    int numeros1[] = {1, 2, 3, 4, 5};
    int numeros2[] = {6, 7, 8, 9, 10};
    int numeros3[] = {11, 12, 13, 14, 15};

    // obtem o total de elemn=entos de cada array
    size_t tamanho1 = sizeof(numeros1) / sizeof(numeros1[0]);
    size_t tamanho2 = sizeof(numeros2) / sizeof(numeros2[0]);
    size_t tamanho3 = sizeof(numeros3) / sizeof(numeros3[0]);

    // executa a função que exibe o conteudo do primeiro array,
    // utilizando a notação de subscrito de array
    imprime1(numeros1, tamanho1, "<numeros1>");

    // executa a função que exibe o conteudo do primeiro array
    // utilizando a aritimetrica de ponteiro
    imprime2(numeros2, tamanho2, "<numeros2>");

    // declara um ponteiro para o terceiro array
    int *ptr3 = numeros3;

    // exibe o conteudo do terceiro \rray, utilizando <ptr3> e 
    // a notação de subscrito de array

    cout << "3. <*ptr3>...: [";

    for(int i = 0; i < tamanho3; ++i){
        if(i < tamanho3 - 1){
            cout << ptr3[i] << ", ";
        }else{
            cout << ptr3[i] << "]" << endl;
        }
    }

    cout << "\n";
    
    // fim do programa
    return 0;
}

// definições das funções 
void imprime1(int numeros[], size_t tamanho, string nome){
    cout << "1. " << nome << ": [";

    for (int i = 0; i < tamanho; ++i){
        if (i < tamanho - 1){
            cout << numeros[i] << ", ";
        }else{
            cout << numeros[i] << "]" << endl;
        }
    }
}

// função que imprime o conteudo do array (versão com ponteiro)
void imprime2(int *numeros, size_t tamanho, string nome){
    cout << "2. " << nome << ": [";

    for (int i = 0; i < tamanho; ++i){
        if (i < tamanho - 1){
            cout << *(numeros + i) << ", ";
        }else{
            cout << *(numeros + i) << "]" << endl;
        }
    }
}