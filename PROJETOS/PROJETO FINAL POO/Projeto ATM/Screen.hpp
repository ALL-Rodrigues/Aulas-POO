// Screen.hpp
// Definição da classe Screen. Representa a tela do ATM

#ifndef SCREEN_HPP
#define SCREEN_HPP

#include <string>
using std::string;

class Screen{
    public:
        void displayMessage (string) const; // gera saida de uma mensagem
        void displayMassageLine(string) const; // gera a saida da mensagem com nova linha
        void displayDollarAmount (double) const; // gera a saida de um valor em dólar
    private:
    // não houve funções e atributos privados nessa classe
}; // fim da classe Screen

#endif