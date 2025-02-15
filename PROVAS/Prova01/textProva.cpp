#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> arr; // Cria um vetor dinâmico
    char x;
    int v = 0;
    int ultimo;

    do {
        int valor;
        cout << "Informe valor: ";
        cin >> valor; // Recebe o valor
        if (valor > v) {
            v = valor;
            ultimo = valor;
            if(ultimo < ultimo){
                ultimo = ultimo;
            }
        }
        arr.push_back(valor); // Adiciona o valor ao vetor

        cout << "Deseja inserir outro valor? (s/n): ";
        cin >> x; // Pergunta ao usuário se deseja continuar
    } while (x == 's');

    //system("cls"); // Corrigido para usar string

    cout << "Valores inseridos: ";
    for (int i = 0; i < arr.size(); i++) {
        cout << arr[i] << (i < arr.size() - 1 ? ", " : ""); // Formata a saída
    }
    cout << endl;

    // Imprimir o histograma
    for (int i = 0; i < arr.size(); i++) {
        cout << i + 1 << "|";
        for (int j = 0; j < arr[i]; j++) {
            cout << "* ";
        }
        cout << endl;
    }

    cout << " +-";
    for (int i = 1; i < ultimo; ++i){
        cout << "--";
    }

    cout << endl;

    // Imprime os índices
    for (int i = 0; i <= v; i++) {
        cout << i  << " "; // Corrigido para imprimir a partir de 1
    }
    cout << endl; // Nova linha no final

    return 0; // Não é necessário liberar memória, o vetor se encarrega disso
}
