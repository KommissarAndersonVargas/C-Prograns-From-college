#include <iostream>

using namespace std;

class A{

public:
    double a;
    double b;

    A(double n, double n2)
    {
        a =n;
        b =n2;
    }

   A operator+ (A &any)
   {
       return A(this->a+ any.a, this->b + any.b);
   }


};




int main()
{
    A any(3.5, 5.6);
    A some(5.6, 8.2);
    A b(0,0);

    b = any + some;

    cout << b.a << endl;
    cout  <<b.b << endl;
    return 0;
}
