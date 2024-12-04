// exemplo 04: date.hpp 

#ifndef DATE_HPP
#define DATE_HPP

// definição da classe Date
class Date{
    public:
        // construtor 
        explicit Date(int m =1, int d = 1, int y = 2000);

        // métodos para exibir a data no formato mm/dd/yyyy
        void printDdate();

    private:
        unsigned int month; // Mês
        unsigned int day;   // Dia
        unsigned int year;  // Ano
};

#endif