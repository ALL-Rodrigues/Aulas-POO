// Programa 38
// Lista 01 priograma38.cpp

#include<iostream>
#include <cstdlib>
#include<iomanip>
#include<string>

using namespace std;

void cupomFiscal(string tipo, int meiopagamento, float carneKg, float precoTotal, float desconto, float valorPagar, int tipocarne);
void meioDePagamento();
void tipoCarne();
void tabelaPreco();

int main(){
    int tipocarne, meiopagamento;
    float carneKg, precoTotal, desconto, valorPagar;
    string tipo; 

    cout << "\n";
    tabelaPreco();
    cin.get();
    system("cls");

    tipoCarne();
    cout << "Informe qual o tipo de carne voce deseja: "; cin >> tipocarne;
    system("cls");

    switch(tipocarne){
        case 1:
            tipo = "Contra File";
            cout << "voce escolheu Cantra File."<< endl;
            cout << "Informe a quantidade de kg de carne: "; cin >> carneKg;
            if(carneKg <= 5){
                precoTotal = carneKg * 40.50;
            }else{
                precoTotal = carneKg * 35.50; 
            } 
            meioDePagamento();
            cout << "Informe qual meio de pagamento: "; cin >> meiopagamento;
            system("cls");
            switch (meiopagamento){
                desconto = 0;
                case 1:
                    desconto = precoTotal - (precoTotal * 0.05);
                    //desconto -= desconto * 0.05;
                    valorPagar = desconto;
                    cupomFiscal(tipo, meiopagamento, carneKg, precoTotal, desconto, valorPagar, tipocarne);
                    break;
                case 2:
                case 3:
                case 4:
                    // desconto não se aplica a esses meios de pagamento nessa promoção em expecifico.
                    desconto = 0;
                    valorPagar = precoTotal;
                    cupomFiscal(tipo, meiopagamento, carneKg, precoTotal, desconto, valorPagar, tipocarne);
                    break;
                
                default:
                    cout << "valor informado de forma incoreta. tentar novamente.";
                    meioDePagamento();
                    break;
                }
            break;
        case 2:
            tipo = "Alcatra";
            cout << "voce escolheu Alcatra."<< endl;
            cout << "Informe a quantidade de kg de carne: "; cin >> carneKg;
            if(carneKg <= 5){
                precoTotal = carneKg * 41.80;
            }else{
                precoTotal = carneKg * 36.25; 
            } 
            meioDePagamento();
            cout << "Informe qual meio de pagamento: "; cin >> meiopagamento;
            system("cls");
            switch (meiopagamento){
                desconto = 0;
                case 1:
                    desconto = precoTotal - (precoTotal * 0.05);
                    valorPagar = desconto;
                    cupomFiscal(tipo, meiopagamento, carneKg, precoTotal, desconto, valorPagar, tipocarne);
                    break;
                case 2:
                case 3:
                case 4:
                    // desconto não se aplica a esses meios de pagamento nessa promoção em expecifico.
                    desconto = 0;
                    valorPagar = precoTotal;
                    cupomFiscal(tipo, meiopagamento, carneKg, precoTotal, desconto, valorPagar, tipocarne);
                    break;
                
                default:
                    cout << "valor informado de forma incoreta. tentar novamente.";
                    meioDePagamento();
                    break;
                }
            break;
        case 3:
            tipo = "Picanha";
            cout << "voce escolheu Picanha."<< endl;
            cout << "Informe a quantidade de kg de carne: "; cin >> carneKg;
            if(carneKg <= 5){
                precoTotal = carneKg * 39.90; 
            }else{
                precoTotal = carneKg * 35.99; 
            } 
            meioDePagamento();
            cout << "Informe qual meio de pagamento: "; cin >> meiopagamento;
            system("cls");
            switch (meiopagamento){
                desconto = 0;
                case 1:
                    desconto = precoTotal - (precoTotal * 0.05);
                    valorPagar = desconto;
                    cupomFiscal(tipo, meiopagamento, carneKg, precoTotal, desconto, valorPagar, tipocarne);
                    break;
                case 2:
                case 3:
                case 4:
                    // desconto não se aplica a esses meios de pagamento nessa promoção em expecifico.
                    desconto = 0;
                    valorPagar = precoTotal;
                    cupomFiscal(tipo, meiopagamento, carneKg, precoTotal, desconto, valorPagar, tipocarne);
                    break;
                
                default:
                    cout << "valor informado de forma incoreta. tentar novamente.";
                    meioDePagamento();
                    break;
                }
            break;
        default:
            cout << "opcao nao corresponde a nenhum. tente novamente.";
            break;
    }
    return 0;
}

void cupomFiscal(string tipo, int meioPagamento, float carneKg, float precoTotal, float desconto, float valorPagar, int tipocarne){
    cout << "+--------------------------------------------+"          << endl;
    cout << "|                  CUPOM FISCAL              |"          << endl;
    cout << "+--------------------------------------------+"          << endl;
    cout << "| Tipo da Carne........: [" << tipocarne << "] " << tipo << endl;
    cout << "| Quantidade...........: "  << carneKg                   << endl;
    cout << "| Preco total..........: "  << precoTotal                << endl;
    cout << "| Valor do desconto"; 
    if(meioPagamento == 1){ 
        cout << "(5%): " << precoTotal-desconto /*desconto - precoTotal*/ << endl;
    }else{ 
        cout << "....: " << desconto << endl;
    }
    cout << "+--------------------------------------------+"          << endl;
    cout << "| Valor a ser pago.....: "  << valorPagar                << endl;
    cout << "+--------------------------------------------+"          << endl;

    return ;
}

void meioDePagamento(){
    cout << "Meio de pagamento:\n\n"; 
    cout << "[1] Cartao Paraiba" << endl; 
    cout << "[2] Dinheiro      " << endl; 
    cout << "[3] Pix           " << endl; 
    cout << "[4] calote        " << endl; 
    return ;
}

void tipoCarne(){
    cout << "[1] Contra File "<<endl;
    cout << "[2] Alcatra     "<<endl;
    cout << "[3] Picanha     "<<endl;
    cout << "[0] Voltar      "<<endl;
    return ;
}

void tabelaPreco(){
    cout << "\n";
    cout << " O Armazem Paraiba esta com uma promocao de carnes imperdivel. confira:\n\n";

    cout << "+-------------+----------+-------------+" << endl;
    cout << "|             |Ate 5Kg   |Acima de 5Kg |" << endl;
    cout << "| Contra File |R$ 40.50  |R$ 35.50     |" << endl;
    cout << "| Alcatra     |R$ 41.80  |R$ 36.25     |" << endl;
    cout << "| Picanha     |R$ 39.90  |R$ 35.99     |" << endl;
    cout << "+-------------+----------+-------------+" << endl;
    return ;
}

// cada cliente so pode levar um tipo de carne
// mas não há limite para o total de kilos
// se for pago com o cartão paraiba ganha 5% de desconto no valor totol

