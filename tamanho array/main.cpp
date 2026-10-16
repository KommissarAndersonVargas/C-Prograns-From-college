#include <iostream>

using namespace std;

int main()
{
    int vet[]={1,2,3,4};


    int i;

    for (i=0; i< sizeof(vet)/4;i++ )
    {
        cout << vet[i] << endl;
    }


    return 0;
}
