#include <iostream>

using namespace std;

/*
class Quad
{
public:
    int ladox;
    int ladoy;

    Quad(int a, int b)
    {
        ladox = a;
        ladoy = b;

    }

    int getarea()
    {
        return ladox * ladoy;
    }

    void display()
    {
        cout << "A area eh: "<< getarea();
    }

};



int main()
{

    Quad *i = new Quad(3, 4);
    i->display();


    return 0;
}
*/
class Base {
public:
    // declaração da função virtual
    virtual void Quem_VIRTUAL()
    {
        cout << "Base\n";
    }
    // função comum
    void Quem_NAO_VIRTUAL()
    {
        cout << "Base\n";
    }
};

class Derivada : public Base {
public:
    // função virtual sobrescrita
    virtual void Quem_VIRTUAL()
    {
         // Base::Quem_VIRTUAL();
        cout << "Derivada\n";
    }
    // função comum sobrescrita
    void Quem_NAO_VIRTUAL()
    {

        cout << "Derivada\n";
    }
};

int main ()
{
    Base *ptr_base;
    Derivada derivada;

   ptr_base = &derivada;           // conversão implícita permissível
   ptr_base->Quem_VIRTUAL();       // chamada polimórfica (mostra: "Derivada")
   ptr_base->Quem_NAO_VIRTUAL();   // chamada comum, não-polimórfica (mostra: "Base")
    //derivada.Quem_VIRTUAL();       // chamada polimórfica (mostra: "Derivada")
    //derivada.Quem_NAO_VIRTUAL();

    cout << endl;

    return 0;
}
