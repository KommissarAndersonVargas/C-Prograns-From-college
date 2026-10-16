#include <iostream>

using namespace std;

int main()
{

    int vet[4]={4, 3, 5, 6};
    int vet2[12]={4, 3, 5, 6,4, 3, 5, 6, 4, 3, 5, 6 };

    sizeof(vet);
    sizeof(vet2);

    cout <<"vet 1 tamanho em bytes: " << sizeof(vet) << endl <<"vet 2 tamanho em bytes: " <<  sizeof(vet2)<< endl;


    return 0;
}
