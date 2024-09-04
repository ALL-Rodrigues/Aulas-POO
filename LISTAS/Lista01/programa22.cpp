// Programa 22
// Lista 02 programa22.cpp
/*  Escreva um programa que receba a entrada de duas notas parciais obtidas por um aluno em uma disciplina
    ao longo de um semestre e calcule a sua média. O programa deve exibir na tela as notas, a média, o conceito 
    correspondente e a mensagem " APROVADO" se o  conceito for A, B, ou C e "REPROVADO" se o conceito for D ou E.
    A atribuição de conceitos obedecce aos dados apresentados abaixo. 

    MEDIA DE APROVEITAMENTO CONCEITO
    entre 9.0 e 10.0  = A
    entre 7.5 e 9.0   = B
    entre 6.0 e 7.5   = C
    entre 4.0 e 6.0   = D
    entre 4.0 e 0     = E
*/

#include<iostream>
using namespace std;
int main(){
    float n1, n2, M;
    cout << " Informe as duas notas do aluno: " << endl;
    cout << " Nota 1: "; cin >> n1;
    cout << " Nota 2: "; cin >> n2;

    M = (n1 = n2)/2;

    cout << " Notas do aluno. " << "\n";
    cout << " nota 1: " << n1 << "\n";
    cout << " nota 2: " << n2 << "\n";
    cout << " media: " << M << "\n";

    switch (M){
    case 10.0:
        cout << "conceito A."
        cout << "APROVADO." << "\n;"
        break;
    case 9.0:
        cout << "conceito A."
        cout << "APROVADO." << "\n;"
        break;
    case 7.5:
        cout << "conceito B."
        cout << "APROVADO." << "\n;"
        break;
    case 6.0:
        cout << "conceito B."
        cout << "REPROVADO." << "\n;"
        break;
    case 4.0:
        cout << "REPROVADO." << "\n;"
        break;
    case 0:
        cout << "REPROVADO." << "\n;"
        break;
    
    default:
        break;
    }
}

#include <iostream>
using namespace std;

int main() {
    float n1, n2, M;
    cout << "Informe as duas notas do aluno: " << endl;
    cout << "Nota 1: "; cin >> n1;
    cout << "Nota 2: "; cin >> n2;

    // Corrigindo o cálculo da média
    M = (n1 + n2) / 2;

    // Exibindo as notas e a média
    cout << "Notas do aluno:" << "\n";
    cout << "Nota 1: " << n1 << "\n";
    cout << "Nota 2: " << n2 << "\n";
    cout << "Média: " << M << "\n";

    // Determinando o conceito e o status
    if (M >= 9.0) {
        cout << "Conceito A." << "\n";
        cout << "APROVADO." << "\n";
    } else if (M >= 7.5) {
        cout << "Conceito B." << "\n";
        cout << "APROVADO." << "\n";
    } else if (M >= 6.0) {
        cout << "Conceito C." << "\n";
        cout << "APROVADO." << "\n";
    } else if (M >= 4.0) {
        cout << "Conceito D." << "\n";
        cout << "REPROVADO." << "\n";
    } else {
        cout << "Conceito E." << "\n";
        cout << "REPROVADO." << "\n";
    }

    return 0;
}
