// exemplo 16(19) de uso de nemespaces
// programa que demonstra a utilização de namespaces
#include<iostream>
#include<iomanip>
#include<vector>
#include<algorithm>
#include<cmath>

using namespace std;

// namespace com a definição de algumas funções estatisticas
namespace estatistico {
    // variável que armazena o valor de PI
    double PI = 3.141516;

    // calculo da média 
    double media(const vector<double>& dados) {
        // variável para armazenar a soma dos valores do vetor 
        double soma = 0;
        //calcula a soma dos valores do vetor
        for(auto valor : dados){
            soma += valor;
        }

        //retorna o valor da media
        return soma / dados.size();
    }

    // calculo da mediana 
    double mediana(vector <double> dados){

        // ordena os valores do vector 
        sort(dados.begin(), dados.end());

        // calcula o temanho do vetor
        size_t size = dados.size();

        // retorna o valor da mediana 
        if(size % 2 == 0){
            return (dados[size/2-1] + dados [size/2])/2;
        }else{
            return dados[size/2];
        }
    }

    // calculo da variância
    double variancia(const vector<double>&dados){
        // calcula a média dos valores do vetor
        double m = media(dados);

        // variável para armazenar a soma dos valore do vetor
        double soma = 0;

        // calcula a noma dos quadrados da diferençã entre o valor e a sua media
        for(auto valor : dados){
            soma += (valor - m) * (valor - m);
        } 

        // retorna a variância dos dados
        return soma / dados.size();
    }

    // calculo do desvio padrão
    double desvioPadrao(const vector<double>& dados){
        // retorna o desvio padão dos dados
        return sqrt(variancia(dados));
    }

}
// função principal
int main(){

    // define o vetor com os dados
    vector<double> dados = {2,3,3,4,5,6,7,8,9,10};

    // cabeçãlho
    cout << "\n\n";
    cout << "exemplo de utilizacao de namespace\n\n";

    // formatação
    cout << setprecision(2);
    cout << setiosflags(ios::fixed);

    //utiliza o namespace para calcularno resultado 
    cout << "Valor de PI..: " << estatistico::PI << endl;
    cout << "Media........: " << estatistico::media(dados) <<endl;
    cout << "Mediana......: " << estatistico::mediana(dados) <<endl;
    cout << "Variancia....: " << estatistico::variancia(dados) <<endl;
    cout << "Desvio Padrao: " << estatistico::desvioPadrao(dados) << endl;

    // fim do programa 
    return 0;
}