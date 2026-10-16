#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <string.h>

using namespace std;
void misterio1(char a[]);


int main()
{
        char  a[]={'u', 'r', 's', 'o'};
        char b[]={'a', 'r', 'a', 'n', 'h', 'a'};
        char  c[]={'g','a', 'v','i','a','o'};
        char  d[]= {'c', 'a', 'v', 'a', 'l', 'o'};

        misterio1(a);


    return 0;
}
void misterio1(char a[])
{
        int num=1;
        int k;
        int c1=0;
        char cont1=0;
        char letra;
        int letras=0; // numero de letras

        int escolha;

            cout << num<< "\n";
            cout<< " Dica: palavra de: "<< strlen(a) << "  letras\n";


            int i= strlen(a);
            int y;
            cout <<"\n";
            int vida=i;
            int certo=0;
            int cont=0;




         while ( letras !=strlen(a) )
         {
           // partida:
            cout << "Digite um letra:  ";
            cin >> letra;
            cout <<"\n";

            c1 = 0;

              for(k=0; a[k]!='\0'; k++)
              {
                  if ( letra == a[k])
                  {
                      cont1= a[k];
                      c1++;
                  }

              }


             if ( c1 > 0)
                {
             certo++;
             letras++;
             cout <<"Letra da palavra " << cont1<<" \n";
             cout<< "Voce tem "<< vida<< "vidas\n";
             cout << a[k]<< "\n";
             //goto partida;
            //cout <<"Voce tem  "<< vida<< "\n";
                 }

            if( c1 == 0 )
            {
                vida--;
                cout << " Letra errada \n";
                cout<< "Voce tem "<< vida<< " vidas\n";
              // goto partida;
              if (vida == 0)
              {
                  break;
              }
            }

    }
 }
