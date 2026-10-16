#include <iostream>

using namespace std;

namespace classe
{
    class A
    {
    public:
        int a1 = 3;
        int a2= 4;
    };
}
using namespace classe;



int main()
{

   // classe :: A teste;  // Usamos isso sem o using namespace classe
    // ou

      A teste; // como estamos usando o using namespace classe podemos fazer assim
    cout <<  teste.a1 << endl;
     cout <<  teste.a2 << endl;
    return 0;
}
