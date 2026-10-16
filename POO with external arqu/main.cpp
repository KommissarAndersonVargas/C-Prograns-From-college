#include <iostream>
#include "classes.h"
using namespace std;
class Burraco{

public:
    int damas;
    int valete;
    int soma =0;

     Burraco(int va, int da)
     {
         valete = va;
         damas = da;

         soma = valete + damas;
     }


};
int main()
{
    cout << "Teste de classe com arquivo externo de cabecalho .h!" << endl;
    Money m1;
    Money m2;
    m2.Money21(2000, 4000);
    int b = m2.money1;
    int c = m2.money2;
    int a = m1.money2;

    cout<<a<<"\n"<< b<<"\n"<< c<<"\n";
    Burraco b1(13, 20);
    cout << b1.soma;

    return 0;
}
