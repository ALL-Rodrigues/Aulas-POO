// exemplo 3

#include<iostream>
#include<iomanip>
using namespace std;

int main(){
    //declaração de variáveis 
    float n1, n2, media{0};

    //entrada de dados
    cout <<  "\n";
    cout << "desvio condicional simples\n\n";
    cout << "* informe as duas notas do aluno: ";
    
    cin >> n1 >> n2;

    //calcula a média do aluno
    media = (n1 + n2)/2;

    //formatação do resultado 
    cout << setprecision(3);
    cout << setiosflags(ios::showpoint);

    //verifica se ele foi aprovado
    if(media >=6){
        cout << "* O aluno foi aprovado com media final de " << media << "\n";
    }else{
        cout << "* O aluno foi Reprovado com media final de " << media << "\n";
    }
    cout <<"\n";

    return 0;
}