// exemplo 05 : date.cpp

#include <iostream>
#include <array>
#include <stdexcept>
#include "date.hpp"

// implementação dos metodos da classe Date
// Construtor personalizado 
// Utiliza o metodo checkDay() para confirmar o valor adequado do dia
Date::Date(int m, int d, int y){
    // valida o valor mes
    if(m > 0 && m <= monthsPerYear){
        month = m;
    }else{
        // caso contrário, lança uma exceção 
        throw std::invalid_argument("month must be 1-12!");
    }

    // atribui o valor do ano
    year = y;

    // valida o valor do dia 
    day = checkDay(d);

    // exibe o valor do objeto Date, para ilustrar quanto o seu construtor é chamado 
    std::cout << "Date object constructor for date: ";
    printDate();
    std::cout << std::endl;
}

//---------------------------------------------------
// destrutor
Date::~Date(){
    // exibe o valor do objeto date, para ilustrar quando o seu destrutor é
    std::cout << "Date object destructor for date: ";
    printDate();
    std::cout << std::endl;
}

//---------------------------------------------------
// metodo para exibir a data no formato mm/dd/yyyy
void Date::printDate() const {
    std::cout << month << "/" << day << "/" << year;
}

// metodo utillitario para checar se o dia esta  no intervalo correto
unsigned int Date::checkDay(int d) const {
    // define umarray com a quantidade de dias de cada mes
    static const std::array <int, monthsPerYear + 1> DaysPerMonth = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    // vefiria se o dia é valido para um mes em especifico
    if(d > 0 && d <= DaysPerMonth[month]){
        return d;
    }

    // verifica se o dia equivale a 29 de fevereiro, durante um ano bissexto
    if(month == 2 && d == 29 && (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0))){
        return d;

        // lança uma execução caso o dia seja invalido
        throw std::invalid_argument("Invalid day for current month and year");
    }

}