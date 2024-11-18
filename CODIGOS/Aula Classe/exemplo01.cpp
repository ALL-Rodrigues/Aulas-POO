// exemplo 01: programa que demostra como criar uma classe com metodo

#include<iostream>
using namespace std;

// cl definição de classes gradeBook
class GradeBook {

    public:
    // função que exibe uma mensagem de boas vindas para o usuario
    void displaymessage() const {
        cout << "Welcome to the grade Book! "<< endl;
    }
};

int main(){
    cout << "\n";
    cout << ">> grade Book\n\n";

    // cria 
    GradeBook myGradeBook;

    // executa
    myGradeBook.displaymessage();

    return 0;
}