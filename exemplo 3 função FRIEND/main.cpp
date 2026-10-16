#include <iostream>

using namespace std;


class Teste {
public:
    void print()
    {
        cout << "a vale: " << a << endl;
        cout << "b vale: " << b << endl;


    }

private:
int a ;
int b;
friend void modifica(Teste &objetus, int val);
//friend void modifica(Teste *objetus, int val);


};
void modifica(Teste &objetus, int val)
{
    objetus.a = val;
    objetus.b = val;
}
/*
ou
void modifica(Teste *objetus, int val)
{
    objetus->a = val;
    objetus->b = val;
}
*/


int main()
{

    Teste a;

   // modifica(&a, 8);
      modifica(a, 8);
      a.print();

    return 0;
}
