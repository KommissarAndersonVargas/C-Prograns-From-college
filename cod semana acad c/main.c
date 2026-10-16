#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
  int i; int b =0; char vet[9]; char vet2[9]; char a;
  int  A =1;  int o =0; int w;
  for (i=0; i< 9; i ++ )
    {
    w=i;
    printf("ATENCAO: Digite uma letra por vez e sem acentos!!!\n");
    printf("Entre com a %d letra da palavra secreta: ", w+1);
    scanf("%s",&vet[i]);
    printf("\n");
    }
 for (i=0; i< 9; i ++ )
 {
 a = vet[i];
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
    printf("%c",vet2[i]);
    }
    printf("uergs");
    return 0;
}
