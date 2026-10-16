#include <iostream>
#include "contas.h"
using namespace std;

class Conta2 : public Conta{

public:
    int a;
    Conta2(int money, int numconta, int n) : Conta( money,  numconta)
    {
          saldo = money +n;
           nconta = numconta;

    }

       void cobra(Conta *ConOrigem, int money)

    {
        ConOrigem->desconta(money);
    }



};
int main()
{
    Conta2 a = Conta2(1000, 1277, 100);
    Conta b = Conta(3000, 3425);


   cout<<"Conta b: \n";
    b.display();
    //a.cobra(1000);
   // b.desconta(1000);
    //cout<< "\nNova atualizacao conta B\n";
   // b.display();
    cout<< "\nNova atualizacao conta B\n";
    a.cobra(&b, 1500); // CONTA 2 MODIFICA O DINHEIRO DE CONTA a

    b.display();



    return 0;
}
