// ATMCaseStudy.cpp
// Programa driver para o estudo de caso do ATM.
// g++ ATMCaseStudy.cpp ATM.cpp Screen.cpp Keypad.cpp CashDispenser.cpp DepositSlot.cpp Account.cpp BankDatabase.cpp Transaction.cpp BalanceInquiry.cpp Withdrawal.cpp Deposit.cpp -o ATM

#include "ATM.hpp" // definição da classe ATM

// a função main cria e executa o ATM
int main()
{
    ATM atm;  // cria um objeto ATM
    atm.run(); // instrui o ATM a iniciar
    return 0; // retorna 0 para indicar que o programa foi executado com sucesso
} // fim do main
