#include <iostream>

using namespace std;

class A{
public:
    static int c;
    int d;
A()
{
    cout<<"oi\n";
    d=1;

}

};
class B : public A{
public:
    int n;
B(int num)
{

 n = num;


}


};
int main()
{  // A *a = new A();
    B LatterB(1);
    B latt =  B(1);

       // a->c = 200;
      //  cout<< a->c << endl;
    cout << LatterB.n << endl;
     cout<<latt.c;
    return 0;
}
