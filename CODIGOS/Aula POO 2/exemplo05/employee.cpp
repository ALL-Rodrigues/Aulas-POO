// exemplo employee.cpp

#include <iostream>
#include "employee.hpp"
#include "date.hpp"


// implementação dos metodos da classe Employee
// construtor
Employee::Employee(const std::string &fn, const std::string &ln, const Date &bd, const Date &hd) : firstName(fn), lastName(ln), birthDate(bd),  hireDate(hd){

        //exibe o valor do objeto Empoyee, para ilustrar quanto o seu construtor é chamado 
        std::cout << "Employee object construtor: " << firstName << " " << lastName << std::endl;
    }

    //-------------------------------------------------------------------
    // destrutor 
    Employee::~Employee(){
        // exibe o valor do objeto emplee, para ilustrar quando o seu destrutor é chamado
        std::cout << "Employee objetct destructor: " << firstName << " " << lastName << std::endl;
    }
    //-------------------------------------------------------------------

    // metodo para exibir informações sobre o objeto employee
    void Employee::printInfo() const{
        std::cout << "* Employee's name: " << lastName << ", " << firstName << std::endl;
        std::cout << " - Birthday: ";
        birthDate.printDate();
        std::cout << " - Hired: ";
        hireDate.printDate();
        std::cout << std::endl;
    }
