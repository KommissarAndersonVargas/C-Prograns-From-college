

#include <iostream>
#include "multiplo.h"
using namespace std;

void Analiza:: Soma(int c1,int c2, int c3)
{
    carta1 = c1;
    carta2 = c2;
    carta3 = c3 ;

    int soma;
    soma = carta1 + carta2+ carta3;

    if (soma == 21)
    {
        cout<< "Vencedor"<< endl;
    }
    else {
        cout<< "Nao deu 21. Perde ponto, tente novamente"<< endl;
    }
}
