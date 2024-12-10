// keypad.cpp
// definição da função-membro da classe keypad (o teclado do ATM).

#include <iostream> 
using std::cin; 

#include "Keypad.hpp" // definição da classe keypad

// retorna um valor de inteiro inserido pelo usuario 
int Keypad::getInput() const {
    int input; // variável para armazenar a entrada 
    cin >> input; // supomos que o usuário insira um inteiro 
    return input; // retorna o valor inserido pelo usuário 
} // fim da função getInput