// Exemplo 01: time.cpp

#include <iostream>
#include <stdexcept> // Classes para relatório de exceções
#include "time.hpp" 


using namespace std;
// função
int main (){
    cout << "\n>> Time\n\n";

    //instancia um objeto da classe Time
    Time t;

    // exibe os valores iniciais do objeto time 
    cout << "The Initial universal time is ";
    t.printUniversal(); // 00:00:00

    cout << "\nThe Initial stand time is ";
    t.printStandard(); // 12:00:00 AM

    cout << endl;

    //------------------------------------------------
    // define um novo nono horario
    t.setTime(13, 27, 6);

    // exibe oss novos valores do objeto Time
    cout << "\nUniversal time after setTime is ";
    t.printUniversal(); //13:27:06

    cout << "\nStandard time after setTime is ";
    t.printStandard(); //1:27:06 PM

    cout << endl;
    //------------------------------------------------------


    // Tentativa de definir um horario invalido
    try{
        t.setTime(99, 99, 99);
    }

    // se deu erro, captura e exibe a execução
    catch(invalid_argument &e) {
        cout << "\nException: " << e.what() << endl;
    }

    // exibe os valores do objeto Time, apos especificar valores invalidos
    cout << "\nAfter attempting invalid settings:\n";

    cout << "\n - Universal time: ";
    t.printUniversal(); //13:27:06

    cout << "\n = Standard Time: ";
    t.printStandard(); //1:27:06 PM

    // fim do programa
    cout <<"\n\n";

    return 0;
}