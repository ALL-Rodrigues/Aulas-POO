// Withdrawal.h
#ifndef WITHDRAWAL_HPP
#define WITHDRAWAL_HPP

#include "Transaction.hpp" // definição da classe Transaction
class Keypad; // declaração antecipada da classe Keypad
class CashDispenser; // declaração antecipada da classe CashDispenser

class Withdrawal : public Transaction
{
public:
    Withdrawal(int, Screen &, BankDatabase &, Keypad &, CashDispenser &);
    virtual void execute(); // realiza a transação
private:
    int amount; // quantia a sacar
    Keypad &keypad; // referência ao teclado do ATM
    CashDispenser &cashDispenser; // referência ao dispensador de notas do ATM
    int displayMenuOfAmounts() const; // exibe o menu de retirada
}; // fim da classe Withdrawal

#endif // WITHDRAWAL_H
