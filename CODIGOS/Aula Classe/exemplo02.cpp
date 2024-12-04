// exemplo 02: 

#include<iostream>
#include<string>
using namespace std;

// definição de classes gradeBook
class GradeBook {

    public:
    // função que exibe uma mensagem de boas vindas para o usuario
    void displaymessage(string courseName) const {
        cout << "Welcome to the grade Book for "<< courseName << "!" << endl;
    }
};

// função principal
int main(){
    cout << "\n";
    cout << ">> grade Book\n\n";
    // variavel para armazenar o nome do curso
    string nameOfCourse;

    // cria um objeto GradeBook chamado myGradeBook
    GradeBook myGradeBook;

    // entra do nome do curso
    cout << "* Please enter the course name: ";
    getline(cin, nameOfCourse);
    cout << endl;

    // executa a função displaymassage()
    // passa nameOfCourse como um argumento 
    myGradeBook.displaymessage(nameOfCourse);

    return 0;
}