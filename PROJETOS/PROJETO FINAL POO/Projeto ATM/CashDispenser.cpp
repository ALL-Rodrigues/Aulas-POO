// CashDispenser.cpp
// definição de função-membro da classe cashDispenser.

#include "CashDispenser.hpp" // definição da classe CashDispenserr

// o construtor-padrão cashDispenser inicializa a contagen como padrão
CashDispenser::CashDispenser(){
    count = INITIAL_COUNT; // configura atribuindo count como padrão 
} // fim do construtor-padrão cashDispenser

// simula a liberação da quantia em dinheiro especificada; 
// supõe que há dinheiro suficiente disponivel (chamada anterior para isSufficientCashAvailable retornou true)
void CashDispenser::dispenseCash(int amount){
    int billsRequired = amount / 20; // número de cédulas de $20 requerido
    count  -= billsRequired; // atualiza a contagem das cédulas 
} // fim da função dispenseCash

// indica se o dispensador de cédulas pode entregar a quantidade desejada 
bool CashDispenser::isSufficientCashAvailable(int amount ) const {
    int billsRequired = amount / 20; // número de cédulas de $20 requerido
    if(count >= billsRequired){
        return true; // cédulas suficientes estão disponiveis
    }else{
        return false; // não há cpedulas suficientes disponiveis 
    }
} // fim da função isSufficientCashAvailable