// Account.hpp 
// definição da classe Acount. representa uma conta bancária. 

#ifndef ACCOUNT_HPP
#define ACCOUNT_HPP

class Account{
    public:
        Account(int, int, double, double); // o construtor configura atributos 
        bool validaPIN(int) const; // o PIN especificado pelo usuário é correto?
        double getAvailableBalance() const; // retorna o saldo disponivel
        double getTotalBalance() const; // retorna o saldo total
        void credit (double); // adiciona um valor ao de Account
        void debit(double); // subtrai uma quantia do saldo de account
        int getAccountNumber() const; // retorna o número da conta

    private:
        int accountNumber; // número da conta 
        int pin; // PIN para autenticação
        double availableBalance; // fundos disponiveis para retirada
        double totalBalance; // fundos disponiveis + fundos esperando compensação
}; // fim da classe Account

#endif