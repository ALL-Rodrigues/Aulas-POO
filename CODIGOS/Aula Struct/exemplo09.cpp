// programa 09: programa que demonstra o uso de argumento =s na função principal

#include<iostream>
#include<cstring>
#include<cstdlib>

using namespace std;

// função pricipal
int main(int argc, char* argv[]){
    cout << "\n";
    cout << "exemplo de argumento da funcao principal\n\n";

    // se p ususaario não fornc=eceu o numero correto de argumentos
    if(argc != 4){
        // exibe uma mensagem de erro
        cerr << "uso: " << argv[0] << "somar/subtrair num1 e num2" << "\n\n";
        // encerra o programa
        return 1;
    }

    // recuperar o valor de cada argumento
    const char *operacao = argv[1];
    int num1 = atoi(argv[2]);
    int num2 = atoi(argv[3]);

    // realiza a soma dos valores
    if(!strcmp(operacao, "somar")){
        cout << "soma: " << num1 + num2 << endl;
    }else if(!strcmp(operacao, "subtrair")){
        cout << "subtrair: " << num1 - num2 << endl;
    }else{
        cout << "operacao invalida." << endl;
    }

    cout << endl;

    // fim do programa
    return 0;
}

// ./exemplo09 somar 5 2
// ./exemplo09 subtrair 7 5