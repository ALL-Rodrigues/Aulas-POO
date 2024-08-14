// programa 05
// Lista 01 exec25.cpp

#include<iostream>
#include<iomanip>
using namespace std;

int main(){
    char p1, p2, p3, p4, p5;
    int i{0};
    cout << " 1. Telefonou para a vitima? "  ; cin >> p1;
    cout << " 2. Esteve no local do crime? " ; cin >> p2;
    cout << " 3. Mora perto da vitima? "     ; cin >> p3;
    cout << " 4. Devia para a vitima? "      ; cin >> p4;
    cout << " 5. Ja trabalhou com a vitima? "; cin >> p5;
    if(p1 == 's' || p1 == 'S'){
        ++i;
    }
    if(p2=='s' || p2 == 'S'){
        ++i;
    }
    if(p3=='s' || p3 == 'S'){
        ++i;
    }
    if(p4=='s' || p4 == 'S'){
        ++i;
    }
    if(p5=='s' || p5 == 'S'){
        ++i;
    }
    cout << "Voce foi classificado como: ";
    switch(i){
        case 1:
        cout << "Inocente";
        break;
        case 2:
        cout << "Suspeito";
        break;
        case 3:
        cout << "Cumplices";
        break;
        case 4:
        cout << "Cumplices";
        break;
        case 5:
        cout << "Assassino";
        break;
        case 0:
        cout << "Inocente";
        break;
    } 
    cout << "\n\n";
    
    return 0;
}