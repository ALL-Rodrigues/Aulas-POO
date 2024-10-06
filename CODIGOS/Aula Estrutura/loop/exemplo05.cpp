// exemplo 06: Switch 
/* Programa que recebe um número equivalente a um determinado mês e informe a
quantidade de dias que ele possui. O programa deve exinir uma mensagem para
os valores que n~]ao correspondem a um mês válido.  */

 #include <iostream>
 #include<iomanip>
 using namespace std;
 
 int main(){
    // declaração de variaveis
    int mes;

    // entrada de dados
    cout << "\n";
    cout << "Estrutura de controle com multiplas escolhas\n\n";
    cout << "* Informe o numeroo equivalente ao mes desejado: "; cin >> mes;

    switch (mes){
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            cout << "\n => O mes " << mes << " Possui 31 dias. ";
            break;

        case 4:
        case 6:
        case 9:
        case 11:
            cout <<"\n=> O mes " << mes << " possui 30 dias.";
            break;

        case 2:
            cout << "\n=> O mes " << mes << "possui 28 dias.";
            break;

        default:
            cout << "\n=> O mes " << mes << " Nao existe!";
            break;
    }
    cout <<"\n\n";
   
    return 0;
 }