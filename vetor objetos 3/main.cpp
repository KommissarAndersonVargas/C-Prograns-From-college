#include <iostream>

using namespace std;

class Num {

public:
    int n1;
    int n2;
    Num(){};
    Num (int n1, int n2);

};
Num:: Num (int n1, int n2)
    {
        this->n1 =n1;
        this->n2 = n2;
    }
int main()
{

    Num alu[5] = { {9,8}, {7,8}, {56,6}, {1,5} };


    cout << alu[0].n1 << endl;
    return 0;
}
