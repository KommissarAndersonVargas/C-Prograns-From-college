#include <iostream>
#include <string.h>
#include <stdio.h>
using namespace std;

int main()
{
    int i;
    int b =0;

    char vet[9];
    char vet2[9];
    char a;

  int  A =1;  int o =0;
  for (i=0; i< 9; i ++ )
    {
    printf("ATENCAO: Digite uma letra por vez e sem acentos!!!\n");
    printf("Entre com a  %d letra palavra secreta: ", i+1);
    cin >> a;
    printf("\n");
    vet[i]= a;

    if((a== 'a') && (A <= 2))
    {
            vet2[i -b] = 'c' ;
            A++;
    }

     if( a=='t'  )
    {
            vet2[i-b] = 'm' ;
    }
    if (a== 'u')
    {
            vet2[i-b] = 'a';
    }
    if (a == 'o' && o < 1)
    {
              vet2[i-b] = 'k' ;
    }
    if(o>1)
    {
             vet2[i-b+1] = 'u' ;
    }
   }

    for (i=0; i< strlen(vet2); i ++ )
    {
    cout <<vet2[i];
    }
    printf("uergs");
    return 0;
}
