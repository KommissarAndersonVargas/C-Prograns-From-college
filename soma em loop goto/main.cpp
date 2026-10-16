#include <iostream>

using namespace std;

int main()
{
    int n1, n2, res;
    char letra;
    inicio:

    cout<<"\n";
    cout << "Digite um valor para n1: ";
    cin >> n1;
    cout<<"\n";
    cout << "Digite um valor para n2: ";
    cin >>n2;
    cout<<"\n\n";

    res= n1+n2;
     cout<< "o resultado da soma de n1 e n2 esta valendo:  "<< res <<"\n\n";

    cout<< " o programa terminou, digite s para fazer de novo ou n para terminar\n";
    cin >> letra;

    if(letra == 's' || letra =='S' )
    {
        goto inicio;
    }


    return 0;
}
