#include <iostream>
#include <math.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
using namespace std;

//float listac[100];
int cont = 0;

class Complexo
{
    private:
        float real;
        float imag;

    public:
         float listac[100];

       void  Complexo1(float rea,float img)
        {
           real = rea;
           imag = img;
        }

         float getMagnitude()
        {
           // mag = (sqrt(real * real + imag * imag)); //PERGUNTAR PROFESSOR


            return sqrt(real * real + imag * imag);

        }



        void displayMag()
        {

        int w;
        int j=0;
        float cop;
        int i;
                   // BOOBLE SHORT
         for (w=1; w< 4; w++)
          {

         for (i =0; i <4 -1; i++ )
         {
           if(listac[i]< listac[i+1])
             {
           cop =listac[i];
           listac[i] = listac[i+1];
            listac[i+1] = cop;

               }

             }
       j++;
        }

      for (i =0; i <4; i++ )
       {

           cout<< "\n\nVetor complexo na posicao " << i << " eh: "<< listac[i] << endl;
         }


   }


};


int main()
{
    Complexo n2;



        int i;


       for (i =0; i <4; i++ )
       {

           n2.Complexo1(i+5, i+3);
           n2.listac[i] = n2.getMagnitude();

       }

       n2.displayMag();



    return 0;
}

/*
using namespace std;

//float listac[100];
int cont = 0;

class Complexo
{
    private:
        float real;
        float imag;

    public:


        Complexo1(float rea,float img)
        {
           real = rea;
           imag = img;
        }

         float getMagnitude()
        {
           // mag = (sqrt(real * real + imag * imag)); //PERGUNTAR PROFESSOR


            return sqrt(real * real + imag * imag);

        }

        void displayMag()
        {

           // cout <<"Tem magnitude de: " << getMagnitude() << endl;
           // if(getMagnitude() > 0)
           // {
             //  listac [cont] = getMagnitude();
             //   cont ++;

           // }

           // cout <<"Tem magnitude de: " << mag << endl;

        }


};



/*
Complexo comparaPorModulo(Complexo * complexo1,Complexo * complexo2)
{
    if(complexo1->getMagnitude()>complexo2->getMagnitude())
        return (*complexo1);
    else
        return (*complexo2);
}
*/
/*
void ord()
        {

     listac[i]= 10.0;

          for (i =0; i <4; i++ )
       {
           cout<< "Vetor complexo na posicao" << i << "eh: "<< listac[i] << endl;
       }

        }
/*
int main()
{
    Complexo n2;
    float listac[100];


        int i;
        int w;
        int j=0;
        float cop;

       for (i =0; i <4; i++ )
       {
           n2.Complexo1(i+1, i+2);
           listac[i] = n2.getMagnitude();
           cout<< "Vetor complexo na posicao" << i << "eh: "<< listac[i] << endl;
       }





       for (w=1; w< 4; w++)
       {

         for (i =0; i <4 -1; i++ )
         {
           if(listac[i]< listac[i+1])
           {
           cop =listac[i];
           listac[i] = listac[i+1];
            listac[i+1] = cop;

           }

       }
       j++;
}

      for (i =0; i <4; i++ )
       {

           cout<< "\n\nVetor complexo na posicao" << i << "eh: "<< listac[i] << endl;
       }



    return 0;
}
*/
