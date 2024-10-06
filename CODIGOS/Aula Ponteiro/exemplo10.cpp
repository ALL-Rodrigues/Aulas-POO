// exemlo 10: 

#include<iostream>
#include<cstring>

using namespace std;

// função principal
int main(){
    cout <<"\n";
    cout << "exemplo de uso de strcpy() e strncpy()\n\n";

    // declara os arrays de caracteres
    char nome[] = "Instituto Federal";
    char texto1[20];
    char texto2[11];

    // realize a copia do conteudo de <nome> para <texto1>
    strcpy(texto1, nome);

    // copia os primeiros 9 caracteres de <nome> para <texto2>
    strncpy(texto2, nome, 9);

    // acresenta o '\0' no final de <texto2>
    texto2[10] = '\0';

    // apresenta o resultado
    cout << "-> Nome...: " << nome << endl;
    cout << "-> Texto 1: " << texto1 << endl;
    cout << "-> Texto 2: " << texto2 << endl;

    cout << endl;

    // fim do programa
    return 0;
}