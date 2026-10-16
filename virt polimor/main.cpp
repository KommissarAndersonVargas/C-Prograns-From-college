#include <iostream>

using namespace std;

class Base
{
public:

    virtual void display()
    {
        cout << "Anderson";
    }
};
class Deri : public Base{

public:

virtual void display()
{
    Base :: display();
    cout << "Roberto Machado de Vargas\n";
}


};


int main()
{
    Deri d;

    d.display();
    d.display();


    return 0;
}
