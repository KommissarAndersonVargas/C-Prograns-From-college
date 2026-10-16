#include <iostream>

using namespace std;
class Triangulo
{
public:
    int x;
    int y;
    int area;
    Triangulo(int a, int b)
    {
        x = a;
        y = b;
    }

    void Area(void)
    {
        area = (x*y)/2;
        cout << "A area eh: "<< area;
    }



};
int main()
{

    Triangulo n(3, 6);

    n.Area();


    return 0;
}
