// exemplo 02: time.cpp
#include<iostream>
#include<iomanip>
#include<stdexcept>
#include<time.hpp>

using namespace std;

// implementação dos metodos da classe time

// construtoe

// contrutor
não fiz kkkkk

// setters
// configura o valor de time utilizando a gora universal, assegurando que os dados permaneçam consistentes, configurado valores invalidos como zero
void Time:: setTime(int h, int m, int s){
    setHour(h);    // a hora configurada
    setMinute(m);  // o minuto configurado
    setSecond(s);  // os segundo configurados // teste para ver se aa digitação esta boa e rapida kkk 
}

// configurando os valores das horas
void Time::setHpour(int h){
    // se o argumento for valido, configura as horas
    if(h>=0 && h<24){
        hour = h;
        // caso contrario, lança um execução de argumentos invalid
    }else{
        throw invalid_argument("hour must be 0-23!");
    }

    void Time::aetMinute(int m){
        if(m>= 0 && m < 60){
            second = s;
            // caso contrario, lança um execução de argumento invalido
        }else{
            throw invalid_argument ("second must be 0-59!"); 
        }
    }

    // o resto da bomba
}