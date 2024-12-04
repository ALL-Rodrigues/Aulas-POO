// Exemplo 02: exemplo02.cpp
// g++ exemplo02.cpp time.cpp -o exemplo02

#include <iostream>
#include <stdexcept>
#include "time.hpp"

int main() {
    std::cout << "\n>> Time\n\n";

    // Instanciamento de vários objetos da classe Time

    Time t1;             // Todos os argumentos são convertidos para sua configuração padrão
    Time t2(2);          // Especifica hora e converte os minutos e segundos para configuração padrão
    Time t3(21, 34);     // Especifica hora e minutos, converte os segundos para configuração padrão
    Time t4(12, 25, 42); // Especifica hora, minutos e segundos

    // ------------------------------------------------------------------------

    std::cout << "Constructed with:\n\n";

    // Objeto t1
    std::cout << "  * t1: all arguments defaulted\n    ";
    t1.printUniversal(); // 00:00:00
    std::cout << "\n    ";
    t1.printStandard(); // 12:00:00 AM

    std::cout << "\n\n";

    // Objeto t2
    std::cout << "  * t2: hour specified, minute and second defaulted\n    ";
    t2.printUniversal(); // 02:00:00
    std::cout << "\n    ";
    t2.printStandard(); // 2:00:00 AM

    std::cout << "\n\n";

    // Objeto t3
    std::cout << "  * t3: hour and minute specified, second defaulted\n    ";
    t3.printUniversal(); // 21:34:00
    std::cout << "\n    ";
    t3.printStandard(); // 9:34:00 AM

    std::cout << "\n\n";

    // Objeto t4
    std::cout << "  * t4: hour, minute and second specified\n    ";
    t4.printUniversal(); // 12:25:42
    std::cout << "\n    ";
    t4.printStandard(); // 12:25:42 AM

    std::cout << "\n\n";

    // Tentativa de inicializar t5 com valores inválidos
    try {
        Time t5(27, 74, 99); // Especifica valores inválidos
    }
    // Se deu erro, captura e exibe a exceção
    catch(std::invalid_argument &e) {
        std::cout << "  * Exception: while initializing t5: " << e.what() << std::endl;
    }

    // ------------------------------------------------------------------------

    // Fim do programa
    std::cout << "\n\n";
    return 0;
}