#include <stdio.h>
#include <stdlib.h>

int main()
{
    char ve[100]={"automacao"};
    char ve2[100]={"programacao"};
    char ve3[100]={"clp"};
    char ve4[100]={"microcontroladores"};
    char vet[100];

    printf("%c",ve[6]);
    printf("h");
    printf("%c%c%c", ve[0],ve[4], ve4[16]);

    vet[0]= ve[6];
    vet[1] = ve[0];
    vet[2]= ve[4];
    vet[3]= 'k';
    vet[4]= ve[1];
    vet[5]= ve4[16];
    vet[6]= ve2[1];
    vet[7]= ve2[3];
    vet[8]= ve4[17];
    printf(" ");

    for (int i=0; i<9; i++)
    {
        printf("%c", vet[i]);
    }



    return 0;
}
