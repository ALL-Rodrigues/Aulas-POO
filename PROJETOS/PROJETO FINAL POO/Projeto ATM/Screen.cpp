// Screen.cpp 
// definição de função-menbro para a classe Screen.
#include <iostream>
using std::cout;
using std::endl;
using std::fixed;

#include <iomanip>
using std::setprecision;

#include "Screen.hpp" // definição da classe Screen 

// gera saida de uma mensagem sem uma nova linha
void Screen::displayMessage(string message) const {
    cout << message;
} // fim da função displayMessage

// gera saida de uma mensagem com uma nova linha
void Screen::displayMassageLine(string message) const {
    cout << message << endl; 
} // fim da função displayMessageLine

// gera saida de um valor em dólar
void Screen::displayDollarAmount (double amount) const {
    cout << fixed << setprecision(2) << "$" << amount; 
} // fim da função displayDollarAmount