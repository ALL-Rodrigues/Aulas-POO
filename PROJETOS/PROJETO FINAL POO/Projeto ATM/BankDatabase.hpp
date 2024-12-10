// BankDatabase.hpp
// definição da classe BankDatabase. representa o banco de dados do banco. 

#ifndef BANK_DATABASE_HPP
#define BANK_DATABASE_HPP

#include <vector> // a classe utiliza vector para armazenar objetos Account
using std::vector;

#include "Account.hpp" // definição da classe Account 

class BankDatabase{
    public:
        BankDatabase(); // o construtor inicializa as constas

        // determina se o número de conta e o PIN correspondem aos de uma Account
        bool authenticateUser(int, int); // retorna true se a Account for autêntica

        double getAvailableBalance(int); // obtém um saldo disponivel  
        double getTotalBalance(int); // obtém o saldo total de uma Account
        void credit (int, double); // adiciona o valor ao saldo de Account
        void debit(int, double); // subtrai o valor do saldo de Account

    private:
        vector<Account>accounts; // vetor das Accounts do banco

        // função utilitária private
        Account * getAccount(int); // obtém ponteiro para o objeto Account
        
}; // fim da classe BankDatabase

#endif // BANK_DATABASE_HPP