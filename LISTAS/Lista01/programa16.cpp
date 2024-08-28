// programa 16
// lista 01 programa16.cpp

#include<iostream>
using namespace std;

int main(){
    float arquivoTamanho, velocidadeInternet, tempoDownload;

    cout << " Informe o tamanho do arquivo para download (em MB): ";
    cin >> arquivoTamanho;
    cout << " Informe a velocidade de internet (em Mbps): ";
    cin >> velocidadeInternet;

    tempoDownload = velocidadeInternet / 8.0;
    tempoDownload = (arquivoTamanho / tempoDownload) / 60.0;

    cout << " tempo aproximado para download de " << tempoDownload << " minutos. " << endl;

    return 0;
}