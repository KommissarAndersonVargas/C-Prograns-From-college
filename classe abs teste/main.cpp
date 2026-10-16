#include <iostream>

using namespace std;

class A{

protected:
    int c;
    int h;

public:
    virtual void area(int g, int i) = 0;



};
class Parale : public A{
  public:

  void area (int g, int i)
 {
     c=g;
     h = i;
     cout << "a area eh: " << c*h << endl;
 }

};
class Tria : public A{
  public:

void area(int g, int i)
{
     c=g;
     h = i;
     cout << "a area eh: " << (c*h)/2 << endl;
}

};


int main()
{
   Parale x;
   Tria t;

   x.area(6,5);
   t.area(5, 5);

    return 0;
}
