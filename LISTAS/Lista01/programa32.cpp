// Programa 32 
// Lista 01 programa32.cpp

#include<iostream>
using namespace std;
int main(){
    int dia, mes, ano;
    cout << "Informe dia: "; cin >> dia;
    cout << "Informe mes: "; cin >> mes;
    cout << "Informe ano: "; cin >> ano;

    if (ano < 1 || ano > 9999) {
        cout << dia << "/" << mes << "/" << ano << ", ano invalido" << endl;
        return 0;
    }

    if (mes < 1 || mes > 12) {
        cout << dia << "/" << mes << "/" << ano << ", mes invalido" << endl;
        return 0;
    }
    
    switch(mes){
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            cout << dia << "/" << mes << "/" << ano << ", ";
            if(dia >= 1 && dia <=31){
                    cout << "data valida";
                }else{
                    cout << "data invalida";
                }
        break;

        case 2:
            cout << dia << "/" << mes << "/" << ano << ", ";
            if((ano % 400 == 0) || (ano % 4 == 0 && ano % 100 != 0)){
                if(dia >= 1 && dia <=29){
                    cout << "data valida";
                }else{
                    cout << "data invalida";
                }
            }else{
                if(dia >= 1 && dia <= 28){
                    cout << "data valida";
                }else{
                    cout << "data invalida";
                }
            }
        break;

        case 4:
        case 6:
        case 9:
        case 11:
            cout << dia << "/" << mes << "/" << ano << ", ";
            if(dia >= 1 && dia <=30){
                cout << "data valida";
            }else{
                cout << "data invalida";
            }
        break;
        
    }
    return 0;
}