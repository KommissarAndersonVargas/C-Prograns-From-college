#include <iostream>
#include<vector>
using namespace std;

class H
{
public:
    int a, b;
 vector<H>vetor;
    void print()
    {
        cout <<" A valeh: " << a << endl;
         cout <<" B valeh: " << b << endl;
    }
        void printVet()
    {
        for (int i=0;  i<vetor.size(); i++)
        {
            //ostrem b
            cout <<" Vet valeh: " << vetor[i] << "\n";
        }


    }




};
class C: public H{





} ;



int main()
{
    C vet;

    vet.a=4;
    vet.b=9;
    vet.vetor.push_back(4);
    vet.vetor.push_back(5);
    vet.vetor.push_back(900);
    vet.print();
    vet.printVet();

    cout << "Hello world!" << endl;
    return 0;
}
