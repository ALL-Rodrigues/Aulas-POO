// exemplo 15: exemplo de uso de strtok e de alocação dinamica

#include<iostream>
#include<cstring>

using namespace std;

int main(){
    cout << "\n";
    cout << "Exemplo de uso de strtok() e alocacao dinamica\n\n";

    // array com texto desejado
    char texto[] = "inha-frase-de-token";

    // caractere de verificação
    char separador[] = "-";

    // tamanho inicial do array de tokens
    int capacidade = 2;

    // array de ponteiro utilizando para armazenar os tokens
    char **tokens = nullptr;

    // inicialmente, aloca espaco para 2 tokens
    tokens = new char*[capacidade];

    // ponteiro para o token
    char *tokenPtr;

    // contadores
    int i, total;

    // exibe o texto inicial 
    cout << "* texto inicial: " << texto << "\n\n";

    // retorna o primeiro token
    tokenPtr = strtok(texto, separador);

    // inicializa o contador de tokens
    total = 0;

    // loop para obter os tokens até que o ponteiro <tokenPtr> seja NULL
    while(tokenPtr != NULL){
        // se chegou no inicio do array que armazena os tokens 
        if(total >= capacidade){
            // duplica o tamanho do array de tokens
            capacidade *= 2;

            // criar e alocar a memoria parra um array temporario
            for(i = 0; i < total; ++i){
                temp[i] = tokens[i];
            }

            // libera a memoria antiga
            delete[] tokens;

            // aponta o array de tokens para o array temporario 
            tokens = temp;
        }

        // armazenamento o token no array de tokens
        tokens[total] = tokenPtr;

        // incrementa o contador do array de tokens
        total++;

        // obtem o proximo tokem
        tokenPtr = strtok(NULL, separador);

    }

    cout << "* Foram gerados " << total << " tokens: \n\n";

    // exibe os tokens que foram gerados 
    for(i - 0; i < total; ++i){
        cout << i +1 << ". -> "  << tokens[i] << endl;
    }

    cout << endl;

    return 0;
}