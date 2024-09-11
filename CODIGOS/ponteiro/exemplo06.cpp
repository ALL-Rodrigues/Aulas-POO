// Exemplo 06: aritimetrica de ponteiro.
// 

#include<iostream>
using namespace std;

// função principal
int main(){
    cout << "\n";
    cout << " Exemplo de aritimetrica de ponteiro\n\n";

    // declaração e iniciallização de um array de inteiros
    int numeros[] = {2, 5, 10, 1, 3, 21};

    // declara o ponteiro e aponta para o primeiro elemento do array
    int *ptr = numeros;

    cout << "1. valor apontado por <ptr>: " << *ptr << endl;

    //incrementa uma posição 
    ptr++;

    cout << "2. valor apontado por <ptr>: " << *ptr << endl;

    // adição de inteiro 
    ptr = ptr + 3;

    cout << "3. valor apontado por <ptr>: " << *ptr << endl;

    // decrementa uma posição 
    ptr--;

    cout << "4. valor apontado por <ptr>: " << *ptr << endl;

    // declara o ponteiro e aponta para o primeiro elemento do array;
    int *ptr1 = &numeros[0];

    // declara o ponteiro e aponta para o quinto elemento do array
    int *ptr2 = &numeros[4];

    cout << "5. valor apontado por <ptr1>: " << *ptr1 << endl;
    cout << "6. valor apontado por <ptr2>: " << *ptr2 << endl;

    // calcula o total de elementos entre os ponteiros
    int total = ptr2 - ptr1;

    cout << "7. total de elementos entre <ptr1> e <ptr2>: " << total << endl;

    // verifica a posição do elemento apontado pelos ponteiros
    if(ptr1 > ptr2){
        cout << "8. <ptr1> aponta para um elemento mais a frente no array. "<< endl;
    } else {
        cout << "8. <ptr2> aponta para um elemento mais a frente no array. "<< endl;
    }

    // declara o ponteiro e aponta para o primeiro elemento do array
    int *ptr3 = numeros;

    // acessa o segundo elemento 
    int segundoElemento = *(ptr3 + 1);

    cout << "9. segundo elemento do array: " << segundoElemento << endl;

    cout << "\n";

    // fim do programa
    return 0;
}