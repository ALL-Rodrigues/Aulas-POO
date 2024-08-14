// exemplo 04: desvio condicional composto
/* Preograma que permite a leitura de duas notas de um aluno e calcula a média 
Se o valor da média for menor que 4, informa que o aluno foi reprovado 
se o valor da média estiver entre 4 e 6, informa o aluno que o aluno deve realizar 
a prova de recuperação(IFA) se o valor da mésia for maior ou igual ao
valor 6, informa que o aluno foi aprovado. o Programa deve exibir a situação
o aluno, juntamente com a media que ele obteve. considere a apresentação dpsos valores 
utilizando duas casas decimais.  */

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
    if(media < 4){
        cout << "* O aluno foi Reprovado com media final " << media << "\n";
    }else if(media >= 4 && media < 6){
        cout << "* O aluno obteve a media final "<< media <<". Ele deve realizar a IFA.";
    }
    else {
        cout << "* O aluno foi aprovado com media final " << media <<"!";
    }
    cout <<"\n";

    return 0;
}