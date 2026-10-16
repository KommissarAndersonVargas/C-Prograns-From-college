#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Complexo {

public:

    int n, n2;

    Complexo(int n3,int n4)
    {
        n = n3;
        n2 = n4;
    }


};
vector <Complexo>vetor;


void mostra ()
{
    int i;
    for (i=0; i< vetor.size(); i++)
    {
        cout << vetor[i].n << endl;
    }
}

int main()
{

    vetor.push_back(Complexo(4,3));
    vetor.push_back(Complexo(2,3));
    vetor.push_back(Complexo(9,31));
    vetor.push_back(Complexo(87,24));

     sort(vetor.begin(), vetor.end() );


    mostra();
    return 0;
}
