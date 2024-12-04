// exemplo 05 date.hpp

#ifndef DATE_HPP
#define DATE_hpp

// DEFINIÇÃO DA CLASSE DATE
class Date {
    public: 

    // constante estatic PARA REPRESENTAR O NUMERO DE MESES POR ANO 
    static const unsigned int monthsPerYear = 12;

    // construtor padrão 
    explicit Date(int m = 1, int d = 1, int y = 1900);

    // destrutor
    ~Date();

    // metodo para exibir a data no formato mm/dd/yyyy
    void printDate() const;

    private:
    unsigned int month; // 1-12 (jan - des)
    unsigned int day;   // 1 - 31 de acordo com cada mes
    unsigned int year;  // ano

    // metodos utilitario para checar se o dia esta no intervalo correto 
    unsigned int checkDay(int d) const; 
};

#endif

// pata programa 05 faz depois 