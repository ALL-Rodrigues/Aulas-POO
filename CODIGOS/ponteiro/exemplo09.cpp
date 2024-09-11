// exempo 09:  Exemplo de um array de ponteiros para funções

#include<iostream>
using namespace std;

// prototipos de função
void cantar(int);
void dancar(int);
void enrolar(int);

// função principal
int main(){
    cout << "\n";
    cout << "Array de ponteiros para funcoes\n\n";

    // declara e inicializa um array de 3 ponteiros para a função,
    // que aceitam um argumento inteiro e retornam nenhum valor
    void(*funcoes[3]) (int) = {
        cantar,
        dancar,
        enrolar
    };

    // controlar a opcao do usuario
    int opcao;

    // recebe a entrada do usuario
    cout << ">> informa a opcao dessejada (0, 1 e 2): ";
    cin >> opcao;
    cout << endl;

    // loop para processar a escolha do usuario 
    while((opcao  >= 0) && (opcao < 3)){
        // executa a função de acordo com a opcao escolhida, 
        // passando o valor da opcao como argumento 
        (*funcoes[opcao])(opcao);

        // recebe a entrada do usuario novamente
        cout << ">> Informe a opcao desejada (0, 1, 2 ou 3 para sair): ";
        cin >> opcao;
        cout << endl;
    }

    // fim do programa
    return 0;
}

// definições de funções
// função cantar()
void cantar(int opcao){
    cout << "* Voce escolheu a opcao " << opcao << ". vamos cantar!!!\n\n";
}

// funçção dancar()
void dancar(int opcao){
    cout << "* Voce escolheu a opcao " << opcao << ". vamos dancar!!!\n\n";
}

// função enrolar()
void enrolar(int opcao){
    cout << "* Voce escolheu a opcao " << opcao << ". vamos enrolar!!!\n\n";
}