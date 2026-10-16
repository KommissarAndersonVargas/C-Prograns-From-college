#include <iostream>

using namespace std;

template <class Tipo>

class Complexo{

public:
    Tipo a;
    Tipo b;

    Complexo(Tipo c, Tipo d)
    {
        a= c;
        b = d;
    }
    void print (){


    cout << a << endl;
    cout  << b << endl;
    }



} ;
int main()
{
    Complexo <double> e(3.333, 4.536);




     e.print();
    return 0;
}
