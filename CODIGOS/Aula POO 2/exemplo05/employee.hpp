// exemplo 05 emplotee.hpp

#ifndef EMPLOYEE_HPP
#define EMPLOYEE_HPP

#include <string>
#include "date.hpp"

// definição da classe Employee
class Employee {
    public:
    // construtor
    Employee(const std::string &fn, const std::string &ln, const Date &bd, const Date &hd);

    // destrutor 
    ~Employee();

    // método para exibir informações sobre o objeto Employee
    void printInfo() const;

    private:
    std::string firstName;
    std::string lastName;
    const Date birthDate;  // Data de nascimento (composição)
    const Date hireDate;  // data de constratação (coposição)

};

#endif