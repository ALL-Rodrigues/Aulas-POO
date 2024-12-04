// exemplo 04: exemploo4.cpp
// g++ exemplo04.cpp date.cpp -o exemplo04

#include <iostream>
#include "date.hpp"

using namespace std;

int main(){
    cout << "\n>> Defaut Memberwise Assignment\n\n";

    // Instancia um objeto da classe Date, utilizando o construtor personalizado
    Date date1(1, 12, 2025);

    // Instancia um objeto da classe Date, utilizando o construtor padrão
    Date date2;

    // exibe os valores antes da atribuição-padrão de menbro a membro
    cout <<"* Defore default menberwise assignment:\n\n";
    cout << " - Date 1: ";
    date1.printDdate(); // 01/12/2025

    cout << endl;

    cout << " - Date 2:";
    date2.printDdate(); // 1/1/2000

    // realiza a atribuiçao-padrão de membro a membro
    date2 = date1;

    // exibe os valores após a atribuição-padrão de membro a membro
    cout << "\n\n* After default memberwise assignment:\n\n";
    cout << " - Date 1: ";
    date1.printDdate(); //1/12/2025

    cout << endl;

    cout << " - Date 2: ";
    date2.printDdate(); //1/12/2025

    // fim do programa
    cout << "\n\n";
    return 0;
}