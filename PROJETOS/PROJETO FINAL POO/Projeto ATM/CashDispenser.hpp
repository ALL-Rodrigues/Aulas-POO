// CashDispenser.hpp 
// definição da classe cashDispenser. representa o ATM para o dispensador de cédulas.

#ifndef CAHS_DISPENSER_HPP
#define CAHS_DISPENSER_HPP

class CashDispenser{
    public:
        CashDispenser(); // o construtor inicializa contagem de conta para 500

        // simula a entrada da quantia especificada de cédulas
        void dispenseCash(int); 

        // indica se o dispensador de cédulas pode entregar a quantia desejada
        bool isSufficientCashAvailable(int) const; 

    private:
        const static int INITIAL_COUNT = 500;
        int count; // numero de cédulas de $20 remanescente
}; // fim da classe cashDispenser

#endif // CASH_DISPENSER_HPP