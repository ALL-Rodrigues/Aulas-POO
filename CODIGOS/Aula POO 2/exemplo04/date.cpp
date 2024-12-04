// exemplo 04: date.cpp

#include <iostream>
#include "date.hpp"

// implementação dos métodos da classe Date
// construtor para exibir a data no formato mm/dd/yyyy
Date::Date(int m, int d, int y): month(m), day(d), year(y) {}

void Date::printDdate(){
    std::cout << month << "/" << day << "/" << year;
}