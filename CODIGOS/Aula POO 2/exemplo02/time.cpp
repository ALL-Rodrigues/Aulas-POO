// exemplo 02: time.cpp

#include <iostream>
#include <iomanip>
#include <stdexcept>
#include "time.hpp"

// implementação dos métodos da classe Time

// construtor
// assegura que todos os objetos Time inicializem em um estado consistente
Time::Time(int hour, int minute, int second){
    // valida e configura a hora
    setTime(hour, minute, second);
}

// setters 
// configura o valor de Time utilizando a hora universal, assegurando que os valores dados permanecam consistentes configurando valores invalidos como zero.
void Time::setTime(int h, int m, int s){
    setHour(h);  // configura a hora
    setMinute(m); // configura os minutos
    setSecond(s); // configura os segundos
}

// configura o valor das horas
void Time::setHour(int h){
    // se o argumento for valido, configura as horas
    if (h >= 0 && h < 24){
        hour = h;
    } else {
        // caso contrario laça um exceção de argumento invalido
        throw std::invalid_argument("hour must be 0-23!");
    }
}

// configura o valor dos minutos
void Time::setMinute(int m){
    // se o argumento for valido, configura os minutos
    if (m >= 0 && m < 60){
        minute = m;
    }else{
        // caso contrario, lança um exceção de argumento invalido
        throw std::invalid_argument("minute must be 0-59");
    }
}

// configura os valores de segundos
void Time::setSecond(int s){
    // se o argumento for valido, configure as segundos
    if(s >= 0 && s < 60){
        second = s;
    } else {
        // caso contrário, lança uma exceção de argumento inválido
        throw std::invalid_argument("second must be 0-59!");
    }
}

// ------------------------------------------
// getters
// retorna o valor das horas
unsigned int Time::getHour() const{
    return hour;
}

// retorna o valor dos minutos
unsigned int Time::getMinute() const{
    return minute;
}

unsigned int Time::getSecond() const{
    return second;
}

// ----------------------------------------

// outros métodos
// metodo que exibe a hora em formato universal (HH:MM:SS)
void Time::printUniversal() const {
    std::cout << std::setfill('0')
        << std::setw(2) << getHour() << ":" 
        << std::setw(2) << getMinute() << ":"
        << std::setw(2) << getSecond();
}

// ----------------------------------------------------------------------------

// Método que exibe a hora em formato padrão (HH:MM:SS AM ou PM)
void Time::printStandard() const {
    std::cout << ((getHour() == 0 || getHour() == 12) ? 12 : getHour() % 12) << ":" << std::setfill('0') 
        << std::setw(2) << getMinute() << ":"
        << std::setw(2) << getSecond() << (getHour() < 12 ? " AM" : " PM");
}


