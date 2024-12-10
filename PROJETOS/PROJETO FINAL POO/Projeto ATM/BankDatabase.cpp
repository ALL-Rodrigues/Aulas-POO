// BankDatabase.cpp
// definição da função-membro da classe BankDAtabase. 

#include "BankDatabase.hpp" // definição da classe BankDatabase 
#include <cstddef> // o compilador recomendou pra corrigir certos erros

//construtor-padrão BankDatabase inicializa contas
BankDatabase::BankDatabase(){
    // cria dois objetos Account para testar
    Account account1(12345, 54321, 1000.0, 1200.0);
    Account account2(98765, 56789, 200.0, 200.0);

    // adiciona os objetos Account ao vector accounts
    accounts.push_back(account1); // adiciona account1 ao fim de vector
    accounts.push_back(account2); // adiciona account2 ao fim de vector
} // fim do construtor-padrão BankDatabase

// recupera o objeto Account que contém o número de conta especificado 
Account * BankDatabase::getAccount(int accountNumber){
    // faz um loop pelas constas procurando uma correspondência com o número de conta
    for(size_t i = 0; i < accounts.size(); i++){
        // retorna a conta atual se uma correspondênte for localizada
        if(accounts[i].getAccountNumber() == accountNumber){
            return &accounts[i];
        }
    } // fim do for

    return NULL; // se nenhuma correspodência com uma conta foi enconstrada, retorna NULL
} // fim da função getAccount

// determina se o número da conta e o PIN especificados pelo usuário correspondem àqueles de uma conta no banco de dados
bool BankDatabase::authenticateUser(int userAccountNumber, int userPIN){
    // tenta recuperar  a conta com o número da conta
    Account * const userAccountPtr = getAccount(userAccountNumber);

    // se a conta existir, retorna o resultado da função validadePIN de Account
    if(userAccountPtr != NULL){
        return userAccountPtr->validaPIN(userPIN);
    }else{ // fim do if e começo do else
        return false; // o número de conta não foi localizado, portanto retorna false
    } // fim do else
} // fim da função authenticateUser

// retorna o saldo disponivel se Account com o número da conta especificado 
double BankDatabase::getAvailableBalance(int userAccountNumber){
    Account * const userAccountPtr = getAccount(userAccountNumber);
    return userAccountPtr->getAvailableBalance();
} // fim da função getAvailableBalance

// retorna o saldo total de Account com o número da conta especificado 
double BankDatabase::getTotalBalance(int userAccountNumber){
    Account * const userAccountPtr = getAccount(userAccountNumber);
    return userAccountPtr->getTotalBalance();
} // fim da função getTotalBalance

// credita uma quantia a Account com o número da conta especidicado
void BankDatabase::credit(int userAccountNumber, double amount){
    Account * const userAccountPtr = getAccount(userAccountNumber);
    userAccountPtr->credit(amount);
} // fim da função credit

// debita uma quantidade da Account com o número da conta especificado 
void BankDatabase::debit(int userAccountNumber, double amount){
    Account * const userAccountPtr = getAccount(userAccountNumber);
    userAccountPtr->debit(amount);
} // fim da função debit