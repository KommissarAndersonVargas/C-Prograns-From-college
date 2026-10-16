#include <iostream>

using namespace std;

class Complexo{

public:
    int num1;
    int num2;

Complexo();

Complexo(int i, int j){

 num1 =i;
 num2 =j;



}
friend ostream & operator<< (ostream & os, const Complexo & c1){


os<< c1.num1 << "/"<<c1.num2;

}

};






int main()
{
    Complexo c[3]{Complexo(2,3), Complexo(3,4), Complexo(4,55)};


    cout << c[0] << endl;
    cout << c[1] << endl;
    cout << c[2] << endl;

    return 0;
}
