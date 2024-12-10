// DepositSlot.cpp
// Definição da função-membro da classe DepositSlot.

#include "DepositSlot.hpp" // definição da classe depositSlot

// indica se o envelope foi recebido (sempre retorna true,
// porque esta é apenas uma simulação do software de uma abertura para depósito rela)
bool DepositSlot::isEnvelopeReceived() const{
    return true; // o envelope de depósito foi recebido 
} // fim da função isEnvelopeReceived