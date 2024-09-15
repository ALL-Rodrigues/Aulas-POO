// exemplo 11 (15) funções 
/* programa que utiliza funções para implementar uma calculadora simples*/
#include<iostream>
#include<iomanip>
#include<cctype>
using namespace std;

// variáveis globais
float resultado, n1, n2;

// protótipos de função
void entrada();
void saida(string operacao);
void pausa();
void adicao();
void subtracao();
void multiplicacao();
void divisao();

int main(){
    //declaração de variaveis
    int opcao = 0;
    // laço para escolha da operação desejada
    while(opcao !=0 ){
        cout << setprecision(2);
        cout << setiosflags(ios::right);
        cout << setiosflags(ios::fixed);

        //cabeçalho
        cout << "\n";
        cout << "----------------------"<<endl;
        cout << " Programa calculadora "<<endl;
        cout << "    menu principal    "<<endl;
        cout << "----------------------"<<endl;
        cout <<"\n";

        // opções do menu
        cout <<"[1] - Adicao "<<endl;
        cout <<"[2] - Subtracao "<<endl;
        cout <<"[3] - Multiplicacao "<<endl;
        cout <<"[4] - Divisao "<<endl;
        cout <<"[5] - Encerrar o programa "<<endl;
        cout <<"\n";

        //entrada do usuario
        cout <<"=> escolha uma opcao: "; cin >> opcao;

        //se o usuario jnao deseja encerrar o programa 
        if(opcao!=5){
            switch (opcao)
            {
            case 1:
                adicao();
                break;
            case 2:
                subtracao();
                break;
            case 3:
                multiplicacao();
                break;
            case 4:
                divisao();
                break;
            }
        }
        //encerra o programa
        else{
            cout << "\nprograma encerrado com sucesso!\n\n";
        }
    }
    // Fim do programa
    return 0;
}

//definição das funções 
// realize a entrada ods números que serão utilizados paraa realizar a operação
void entrada(){
    cout << "\n";
    cout << "* Informe o primeiro numero: "; cin >> n1;
    cout << "* Informe o segundo numero: "; cin >> n2;
}

//exibe o resultado da operação
void saida(string operacao) {
    cout <<"\n";
    cout <<"=> o resultado da "<< operacao;
    cout <<" entre " << n1 << " e "<< n2;
    cout << "e "<< resultado <<"!\n";

    //simula o resultado da operação 
    pausa();
} 

// simula uma pausa na execução do programa 
void pausa(){
    char letra;

    cout << "\n";
    cout << "tecle <C> = <Enter> para voltar ao menu: ";

    // laço para receber a entrada do usuario
    do {
        //obtém a entrada do usuário
        letra = cin.get();
        // converte para letras maiúsculas
        letra = toupper(letra);
    }while(letra !='C');
}

// realiza a função de adição
void adicao(){
    // cabeçalho
    cout << "\n";
    cout << " Rotina de Adição " << endl;
    cout << "------------------" << endl;

    // executa a função para obter os dados
    entrada();

    //calcula a adição
    resultado = n1 + n2;

    // executa a fução para exibir o resultado 
    saida("adicao");
    
}

// realiza a função de Subtração
void subtracao(){
    // cabeçalho
    cout << "\n";
    cout << " Rotina de Subtracao " << endl;
    cout << "---------------------" << endl;

    // executa a função para obter os dados
    entrada();

    //calcula a adição
    resultado = n1 - n2;

    // executa a fução para exibir o resultado 
    saida("subtracao");
    
}

// realiza a função de multiplicação
void multiplicacao(){
    // cabeçalho
    cout << "\n";
    cout << " Rotina de Multiplicacao " << endl;
    cout << "-------------------------" << endl;

    // executa a função para obter os dados
    entrada();

    //calcula a adição
    resultado = n1 * n2;

    // executa a fução para exibir o resultado 
    saida("multiplicacao");
    
}

// realiza a função de Divisão
void divisao(){
    // cabeçalho
    cout << "\n";
    cout << " Rotina de Divisao " << endl;
    cout << "-------------------" << endl;

    // executa a função para obter os dados
    entrada();

    // verifica se não está ocorrendo uma divisão por zero
    if(n2==0){
        cout <<"\n";
        cout <<" erro de divisao\n";
        pausa();
    }else{
        //calcula a Divisão
        resultado = n1 / n2;
        // executa a fução para exibir o resultado 
        saida("divisao");
    } 
}