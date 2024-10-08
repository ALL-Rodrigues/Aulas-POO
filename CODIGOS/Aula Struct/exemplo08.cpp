// exemplo 09: programa que demonstra o uso de argumentos na função principal

#include<iostream>
using namespace std;

// função principal 
int main (int argc, char* argv[]){
    cout << "\n";
    cout << "exemplo de argumentos da funcao principal\n\n";

    // exibe o numero de argumentos passados para a função 
    cout << "Numeros de argumentos: " << argc << "\n\n";

    // loop para exibir os argumentos passados para a função 
    for(int i = 0; i < argc; ++i){
        cout << "Argumento " << i << "; " << argv[i] << "\n\n";
    }

    cout << endl;

    // fim do programa
    return 0;
}

// ./exemplo08 4 2 8