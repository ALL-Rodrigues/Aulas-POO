// Programa 03
// Lista 01 exec03.cpp

#include<iostream>
using namespace std;
int main(){
    float n1, n2, n3, n4, tl, mf;
    cout << "informe notas do aluno:" <<endl;
    cout << "Nota 1: "; cin >> n1;
    cout << "Nota 2: "; cin >> n2;
    cout << "Nota 3: "; cin >> n3;
    cout << "Nota 4: "; cin >> n4;
    tl =  n1 + n2 + n3 + n4;
    mf = tl/4;
    cout << "Media Final e "<< mf << endl;
    return 0;
    
}