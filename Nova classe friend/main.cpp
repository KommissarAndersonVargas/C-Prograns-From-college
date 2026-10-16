#include <iostream>

using namespace std;

class A
{
public:
    void display()
    {
        cout <<" x vaele: "<< x;
        cout <<" \ny vaele: "<< y;
    }
private:

        int y;
        int x;
        friend void modifica( A &objeto ,int valor );
        friend class Letra;


};

class Letra{

public:
    void modi(A & objs) // modifica a classe A
    {
    objs.y= 3;
    }

};



    void modifica( A &objeto ,int valor ) // polimorfismo
    {
        objeto.x = valor;
    }



int main()
{


     A aa;
     Letra c;

     c.modi(aa);

     modifica(aa, 32);
     aa.display();


    return 0;
}
