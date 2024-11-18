// exemplo 04: 

#include<iostream>
#include<string>
using namespace std;

// definição de classes gradeBook
class GradeBook {

    public:
    // metodo setter, para configurar o nome do curso
    void setCourseName(string name) {
        courseName = name;
    }

    // metodo getter, para obter o nome do curso
    string getCourseName() const {
        return courseName;
    }
    // função que exibe uma mensagem de boas vindas para o usuario
    // utiliza o metodo getcousename() para obter o nome do curso
    void displaymessage() const {
        cout << "Welcome to the grade Book for "<< getCourseName() << "!" << endl;
    }

    private: 
    // atributo que armazena o nome do curso
    string courseName;
};

// função principal
int main(){
    cout << "\n";
    cout << ">> Grade Book\n\n";
    // variavel para armazenar o nome do curso
    string nameOfCourse;

    // cria um objeto GradeBook chamado myGradeBook
    GradeBook myGradeBook;

    // -----------------------------------------------
    // exibe o valor inicial do atributo cousename
    cout << "* initial course name is: " << myGradeBook.getCourseName() << endl;
    cout << endl;

    // -----------------------------------------------

    // entrada do nome do curso
    cout << "* Please enter the course name: ";
    getline(cin, nameOfCourse);
    //cout << endl;

    // configura o nome do curso
    myGradeBook.setCourseName(nameOfCourse);
    cout << endl;

    // exibe a mensagem com o novo nome do curso
    myGradeBook.displaymessage();

    //fim do programa
    cout << endl;
    return 0;
}