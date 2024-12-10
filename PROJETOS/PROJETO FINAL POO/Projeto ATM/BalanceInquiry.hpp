// BalanceInquiry.hpp
// definição da classe BalanceInquiry. representa uma consulta de saldo

#ifndef BALANCE_INQUIRY_HPP
#define BALANCE_INQUIRY_HPP

#include "Transaction.hpp"  // definição da classe transaction

class BalanceInquiry : public Transaction{
    public: 
        BalanceInquiry(int , Screen &, BankDatabase &); // construtor
        virtual void execute(); // realiza a transação 
}; // fim da classe balanceInquiry

#endif