#include <iostream>

using namespace std;

class Conta{

public:

    void debitar(int money)
    {
        saldo = saldo - money;
    }
    void display()
    {
        cout<< "\nSeu saldo eh: "<<saldo<<endl;
    }

private:
    int saldo = 6000;



};
//------------------------------------EXEMPLO UTILIZADO EM AULA DE POLIMORFISMO------------------------

void Makes(Conta *c, int mo)
{
    c->debitar(mo);

}
/*
void mudasaldo(Conta &c)
{
    c.saldo =9000;

}
*/

//----------------------------------------------FIM DO POLIMORFISMO------------------------------------


int main()
{

    Conta a;
    cout<< "Saldo inicial\n";
    a.display();
    Makes(&a, 2400);
    cout<< "\n\nSaldo final\n";
    a.display();
    a.display();
    a.display();
   // mudasaldo(a);
   // a.display();
    return 0;
}
