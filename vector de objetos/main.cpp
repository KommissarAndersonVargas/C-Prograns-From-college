#include <iostream>
#include <vector>
#include <algorithm>
#include <limits>
#include <limits.h>

using namespace std;
 void display();

class A{

public:
    int a;
    int b;

    A(int a,int b)
    {

    this->a=a;
    this->b=b;


    }



};

std:: vector<A> vec;
void display()
    {
        int i;
        for(i=0; i< vec.size(); i++)
        {
            cout << "Neu vector " << endl;
            cout << "a: "<<vec[i].a << endl;
            cout << "b: "<<vec[i].b << endl;
            cerr << "finish" << endl;
        }
    }

int main()
{
     //algo(1,4)
    vec.push_back( A(1,4));
    vec.push_back( A(5,5));
    vec.push_back( A(6,12));
    vec.push_back( A(145,10));
    display();


    return 0;
}
