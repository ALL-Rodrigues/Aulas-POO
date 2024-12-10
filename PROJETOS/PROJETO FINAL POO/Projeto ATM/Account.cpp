// Account.cpp
// definição da função-membro para a classe Account.

#include "Account.hpp"

// o construtor Account inicializa os atributos
Account::Account(int theAccountNumber, int thePIN, double theAvailableBalance, double theTotalBalance) 
: accountNumber(theAccountNumber), 
pin(thePIN), 
availableBalance(theAvailableBalance), 
totalBalance(theTotalBalance){
    // corpo vazio 
} // fim do construtor Account

// determina se um PIN especificado pelo usuário corresponde ao PIN em Account
bool Account::validaPIN(int userPIN) const{
    if(userPIN == pin){
        return true;
        // fim do if e começo do else
    }else{
        return false;
    } // fim do else
} // fim da função validaPIN

// retorna o saldo disponivel 
double Account::getAvailableBalance() const{
    return availableBalance;
} // fim da função getAvailableBalance

// retorna o saldo total 
double Account::getTotalBalance() const{
    return totalBalance;
} // fim da função getTotalBalance

// credita uma quantia á conta 
void Account::credit(double amount){
    totalBalance += amount; // adiciona ao saldo total
} // fim da função credit

// debita uma quantidade da conta
void Account::debit(double amount){
    availableBalance -= amount; // subtrai do saldo disponivel
    totalBalance -= amount; // subtrai do saldo total
} // fim da função debit

//retorna o número da conta 
int Account::getAccountNumber() const{
    return accountNumber;
} // fim da função getAccountNumber