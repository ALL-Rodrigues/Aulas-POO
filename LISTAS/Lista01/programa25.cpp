#include<iostream>
using namespace std;

const int num = 5;

int main(){
    char p;
    int contador = 0;
    const char* perguntas[num]{
        "1. Telefonou para a vitima? ",
        "2. Esteve no local do crime? ",
        "3. Mora perto da vitima? ",
        "4. Devia para a vitima? ",
        "5. Ja trabalhou com a vitima? "
    };  
    
    cout << " Responda as perguntas com (S/N)."<< endl;
    for (int i = 0; i < num; ++i){
        cout << perguntas[i]; cin >> p;
        if (p == 's' || p == 'S'){
            ++contador;
        }
    }
    cout << "\n";
    cout <<"Voce foi considerado: ";
    switch(contador){
        case 0:
        case 1:
        cout << " Inocente";
        break;
        case 2:
        cout << " Suspeito";
        break;
        case 3:
        case 4:
        cout << " Cumplice";
        break;
        case 5:
        cout << " Assassino";
        break;
    } 
    cout << "\n";  
    return 0;
}