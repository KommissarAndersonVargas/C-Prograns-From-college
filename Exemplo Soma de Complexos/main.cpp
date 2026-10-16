#include <iostream>

using namespace std;

class Conta{

private:
    int a = 9000;
    int saldo = 9000;


public:
       void cobra( int money)

    {
        saldo = saldo - money;
    }

    void add(int valor)
    {
        saldo = saldo + valor;
    }
    void display()
    {
        std:: cout<< " saldo eh: "<< saldo <<"\n";
    }


};
int main()
{

    Conta b;
   b.cobra(1000);


   b.display();
   b.add(500);
   b.display();
   b.display();




    return 0;
}
