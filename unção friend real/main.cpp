#include <iostream>

using namespace std;

class exemplo
{

public:
    int x = 4;
    int y = 7;
    friend int soma( exemplo &o);
};

int  soma( exemplo &o)
{
    return (o.x = 4* 8);
}


int main()
{
    exemplo p;


    cout << soma(p) << endl;
    cout<< p.x;
    return 0;
}
