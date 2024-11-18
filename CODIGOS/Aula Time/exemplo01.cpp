// Exemplo 01: time.cpp

#include <iostream>
#include <iomanip>
#include <stdexcept> // Classes para relatório de exceções
#include "time.hpp" 


using namespace std;

// -----------------------------------------------------------------------------------------------

// Implementação dos métodos da classe Time

// Construtor
// Assegura que todos os objetos Time iniciem em um estado consistente
Time::Time() : hour(0), minute(0), second(0) {}

// -----------------------------------------------------------------------------------------------

// Método Setter, para configurar o valor de Time utilizando a hora universal
// Assegura que os dados permaneçãm consistentes configurando valores inválidos
// como zero
void Time::setTime(int h, int m, int s) {

    // Se os argumentos forem válidos, configura os valores
    if ((h >= 0 && h < 24) && (m >= 0 && m < 60) && (s >= 0 && s < 60)) {
        hour = h;
        minute = m;
        second = s;
    }

    // Caso contrário, lança um exceção de argumento inválido
    else
        throw invalid_argument("hour, minute and/or second was out of range!");
}

// -----------------------------------------------------------------------------------------------

// Método que exibe a hora em formato universçao (HH:MM:SS)
void Time::printUniversal() const {
cout << setfill('0') << setw(2) << hour << ":" << setw(2) << minute << ":" << setw(2) << second;

}

// metodo que exibe a hora em formato padrao (HH:MM:SS AM ou PM)
void Time::printStandard() const{
    cout << ((hour == 0 || hour == 12) ? 12 : hour % 12) << ":" << setfill('0') << setw << minute << ":" << setw(2) << second <<(hour < 12 ? "AM" : "PM"); 
}