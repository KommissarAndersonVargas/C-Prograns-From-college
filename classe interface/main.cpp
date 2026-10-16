#include <iostream>

using namespace std;

class Geo {

public:

    virtual void area(int a, int b) = 0;



};

class Triangulo: public Geo{
private:
    int base;
    int hal;
    double ar;
public:
    void area(int a, int b)
    {
        base = a;
        hal = b;
        ar = (base * hal)/2;
        cout << "A area do triangulo vale:  " << ar;
    }

};
class Cubo: public Geo{
private:
    int base;
    int hal;

public:
    void area(int a, int b)
    {
        base = a;
        hal = b;

        cout << "A area do triangulo vale:  " << base*hal;
    }

};

int main()
{
   Triangulo t;
   Cubo cu1;
   t.area(3,7);
   cout <<endl;
   cu1.area(4,4);
    return 0;
}
