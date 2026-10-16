#include <iostream>

using namespace std;
namespace soma
{
    int num = 0;
}
namespace soma1
{
    int num = 9;
}
using namespace soma;

class Infop{
public:
    void display()
   {
       cout<<nome<<endl;
       cout<< cpf<<endl;
       cout<< conta<<endl;
   }
private:
   string nome;
   int  cpf;
   int conta;

   friend void atri(Infop &A, string n,int c, int con );

};
 void atri(Infop &A, string n,int c, int con )
 {
     (A).nome = n;
     (A).cpf = c;
     (A).conta = con;
 }

int main()
{
    Infop A;
    //std::cout << soma1:: num ;
    atri( A,"Pedro", 334, 1000);

    A.display();
    A.display();
    A.display();


    return 0;
}
