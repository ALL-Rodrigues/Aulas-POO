//exemplo (13) 16 exemplo de sobrecarga de função
// programa que demon=nstra a utilização de sobrecarga de funçoes

#include<iostream>
using namespace std;

// prototipos de funções
void imprime();
void imprime(int valor);
void imprime(float valor);
void imprime(int n1, float n2);

// função principal
int main(){
    cout << "\n";

    // utiliza as funções sobrecarregadas
    imprime();
    imprime(10);
    imprime(10.99f);
    imprime(1, 0.99f);

    cout <<"\n";

    //fim do programa
    return 0;
}

// definir funções

// funcao sobrecarregada sem parametro
void imprime(){
    cout<<" funcao sem parametros."<< endl;
}

//função sobrecarregada com um parâmetro inteiro
void imprime(int valor) {
    cout << " Funcao com argumento inteiro: "<< valor << endl;
}  

// função sobrecarregada com parametro real
void imprime(float valor) {
    cout << " Funcao com argumento real: "<< valor << endl;
}  

// 
void imprime(int n1, float n2){
    cout << "primeiro valor: " << n1 << endl;
    cout << "segundo valor: "<< n2 << endl;
}