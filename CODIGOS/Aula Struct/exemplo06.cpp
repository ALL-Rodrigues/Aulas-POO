// exemplo 06: programa para demonstrar a uso de unióes

#include<iostream>

using namespace std;

// definição da união 
union Cadastro {
    const char *nome;
    float nota1;
    float nota2;
};

// função principal 
int main(){
    cout << "\n";
    cout << "* Exemplo de Unioes\n\n";

    // declara uma variavel de tipo cadastro
    union Cadastro aluno;

    // exibe o endereço de memoria utilizado por cada atributo
    cout << "Endereco de Memoria utilizado por <nome>.: " << &aluno.nome << endl;
    cout << "Endereco de memoria utilizado por <nota1>: " << &aluno.nota1 << endl;
    cout << "Endereco de memoria utilizado por <nota2>: " << &aluno.nota2 << endl;

    cout << endl;

    // atribui um valor para o atributo nome
    aluno.nome = "Paulo Giovane";
    cout << "Nome: " << aluno.nome << endl;

    // atribui um valor para o atributo nota1
    aluno.nota1 = 10;
    cout << "Nota1: " << aluno.nota1 << endl;

    // atribui um valor para o atributo nota2
    aluno.nota2 = 10;
    cout << "Nota2: " << aluno.nota2 << endl;

    cout << endl;

    // tentativa de acessar o valor de um atributo que não esta ativo nesse caso, o programa resulta em um comportamento indefinido
    cout << "Nome: " << aluno.nome << endl;

    // fim do programa
    return 0;
}