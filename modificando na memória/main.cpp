#include <iostream>


using namespace std;
class Conta{

public:
    int a ;




      Conta(int a)
      {
          this->a = a;
      }

};
class Poupanca : public Conta{


public:
  int  b;

    Poupanca(int a, int b) : Conta(a){

    this->b=b;

    }



};
class ContaConjunta : public Conta : public Poupanca{

public:
    int c;


ContaConjunta(int a, int b, int c) : Conta(a) : Poupanca(a,b)
{
 this->c= c;
}


};

int main()
{






    return 0;
}



/*
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
*/
