// exemlo 10: exemplo de uso de strcat e strncat

#include<iostream>
#include<cstring>

using namespace std;

// função principal
int main(){
    cout <<"\n";
    cout << "exemplo de uso de strcat() e strncat()\n\n";

    // declara os arrays de caracteres
    char parte1[50] = "Instituto";
    char parte2[] = "Federal";
    char texto[20] = "";

    // concatena <parte2> dentro de <parte1>
    strcat(parte1, parte2);

    // concatena somente os 5 primeiros caracteres do <parte1> dentro de <texto>
    strncat(texto, parte1, 5);

    // apresenta o resultado
    // apresenta o resultado
    cout << "-> Parte 1: " << parte1 << endl;
    cout << "-> Parte 2: " << parte2 << endl;
    cout << "-> Texto  : " << texto << endl;

    cout << endl;

    // fim do programa
    return 0;
}