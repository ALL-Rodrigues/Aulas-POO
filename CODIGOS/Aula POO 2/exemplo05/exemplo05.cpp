// exemplo 05: exemplo05.cpp
// g++ exemplo05.cpp date.cpp employee.cpp -o exemplo05

#include <iostream>
#include "date.hpp"
#include "employee.hpp"

using namespace std;

// função principal
int main(){
    cout << "\n>> Demonstração Composition: an object with menber object\n\n";

    // instanciando da classe de nascimento do d=funcionario
    Date birth(1, 13, 19977);

    // intanciando da date de constrção do funcionario
    Date hire(1, 9, 2010);

    // instanciando do funcionario
    Employee manager("Walter", "Paraiba", birth, hire);

    cout << endl;

    manager.printInfo(); 

    return 0; 
}