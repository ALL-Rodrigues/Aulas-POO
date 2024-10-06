// Programa 86
// Lista 04 programa86.cpp

#include<iostream>
using namespace std;

void teste1(int i, int j);

int main(){
    cout << "\n";
    cout << "Programa 86.\n\n";
    teste1(0, 0);
    return 0;
}

void teste1(int i, int j){
    for(int i = 0; i <=5; ++i){
        for(int j = 0; j<i; ++j){
            cout << "* ";
        }
        cout << endl;
    }

    for(int i = 0; i <=4; ++i){
        for(int j = 4; j>i; --j){
            cout << "* ";
        }
        cout << endl;
    }
}
