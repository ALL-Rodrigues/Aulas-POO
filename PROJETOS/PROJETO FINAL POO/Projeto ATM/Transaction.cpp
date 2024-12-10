// Transaction.cpp
#include "Transaction.hpp" // definição da classe Transaction
#include "Screen.hpp" // definição da classe Screen
#include "BankDatabase.hpp" // definição da classe BankDatabase

// o construtor inicializa recursos comuns de todas as Transactions
Transaction::Transaction(int userAccountNumber, Screen &atmScreen, BankDatabase &atmBankDatabase)
    : accountNumber(userAccountNumber),
      screen(atmScreen),
      bankDatabase(atmBankDatabase){
    // corpo vazio
} // fim do construtor de Transaction

// retorna o número da conta
int Transaction::getAccountNumber() const{
    return accountNumber;
} // fim da função getAccountNumber

// retorna a referência à tela
Screen &Transaction::getScreen() const{
    return screen;
} // fim da função getScreen

// retorna a referência ao banco de dados de instituição financeira
BankDatabase &Transaction::getBankDatabase() const{
    return bankDatabase;
} // fim da função getBankDatabase
