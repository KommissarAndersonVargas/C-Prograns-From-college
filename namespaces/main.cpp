#include <iostream>

using namespace std;

namespace classes
{


class Ae{

 public:
 void display()
 {
     cout<<"Ola rapazes\n";
 }

  };
}
using namespace classes;

int main()
{
    //cout << "Hello world!" << endl;

    Ae obj;
    obj.display();


    return 0;
}
