#include <iostream>
#include <stdexcept>
#include <vector>
#include <limits>
using namespace std;

double divi(double n1, double n2)
{

    if(n2 == 0)
    {
        throw "Divisao por zero\n";
    }
    if(n1 >= 10)
    {
        throw "N1 precisa ser menor que 10\n";
    }

    return n1/n2;
}
int main()
{
  double n1= 3.4;


    try{


    cout << divi(11, 10);


    }
    catch (const char* e)
    {
        cout << "Erro: " << e << endl;
    }

    return 0;
}

/*
void MyFunc(int c)
{
    if (c > numeric_limits< char> ::max())
        throw invalid_argument("MyFunc argument too large.");
    //...
}

int main()
{
    try
    {
        MyFunc(256); //cause an exception to throw
    }

    catch (invalid_argument& e)
    {
        cerr << e.what() << endl;
        return -1;
    }
    //...
    return 0;
}
*/
