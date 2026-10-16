#include <iostream>

using namespace std;

int NumC[]={0};
int w=0;
class NumComplex
{
public:
    NumComplex( int n1, int n2, int exp)
    {
       num1 = n1;
        if (exp == 0)
        {
           exp = 1; // 0 é igual a 1
           setNum2(n2,exp, 1);
        }
        else if (exp == 1)
        {
            // i //CASO ESPECIAL
             exp = 1;
            setNum2(n2,exp,2);
        }
         else if (exp == 2)
        {
            exp = -1;
            setNum2(n2,exp, 1);
        }
         else if (exp == 3)
        {
            // -i //CASO ESPECIAL
            exp = -1;
            setNum2(n2,exp,2);
        }

        //--------------------------------Fronteira----------------------------------
  else
  {
            // in = ir
            exp = exp % 4;

        if (exp == 0)
        {
           exp = 1; // 0 é igual a 1
           setNum2(n2,exp, 1);
        }
        else if (exp == 1)
        {
            // i //CASO ESPECIAL
             exp = 1;
            setNum2(n2,exp,2);
        }
         else if (exp == 2)
        {
            exp = -1;
            setNum2(n2,exp, 1);
        }
         else if (exp == 3)
        {
            // -i //CASO ESPECIAL
            exp = -1;
            setNum2(n2,exp,2);
        }

    }

    }
    void setNum2(int n2, int exp, int selecao)
    {
        if (selecao == 1)
        {
        sel =1;
        num2 = n2 * exp;

        }
        if (selecao == 2) //CASO ESPECIAL
        {
        sel =2;
        num2 = n2 * exp;
        }
    }

   void SomaPrint ()
   {
       int soma;
       if (sel == 1)
        {

          soma = num1 + num2;
          cout << "Soma vale: "<< soma;
          NumC[w]= soma;
          w++;

        }
        if (sel == 2) //CASO ESPECIAL
        {

            cout << "Soma vale: "<< num1 <<" "<< num2<<"i";
             NumC[w]= num1 ;
             w++;
             NumC[w+1]= num2 ;
             w++;

        }

   }
    void SubtraPrint ()
   {
       int soma;
       if (sel == 1)
        {

          soma = num1 - num2;
          cout << "Subtracao vale: "<< soma;
          NumC[w]= soma;
          w++;

        }
        if (sel == 2) //CASO ESPECIAL
        {

            cout << "Subtracao vale: "<< num1 <<" "<< -num2<<"i";
             NumC[w]= num1 ;
             w++;
             NumC[w+1]= -num2 ;
             w++;

        }

   }
    void ProdutoPrint ()
   {
       int soma;
       if (sel == 1)
        {

          soma = num1 * num2;
          cout << "Produto vale: "<< soma;
          NumC[w]= soma;
          w++;

        }
        if (sel == 2) //CASO ESPECIAL
        {

            cout << "Produto vale: "<< num1*num2<<"i";
             NumC[w]= num1*num2 ;
             w++;


        }

   }
    void DivisaoPrint ()
   {
       int divi;
       if (sel == 1)
        {
             if (num1%num2 == 0)
             {

           divi = num1 / num2;
          cout << "Disisao vale: "<< divi;
          NumC[w]= divi;
          w++;
             }
             else
                {
          cout << "Divisao vale: ("<< num1<< "/"<< num2<<")";
          NumC[w]= num1 ;
             w++;
             NumC[w+1]= num2 ;
             w++;

                }
        }
        if (sel == 2) //CASO ESPECIAL
        {
              if (num1%num2 == 0)
             {
            cout << "Divisao vale: "<< num1/num2<<"i";
             NumC[w]= num1 ;
             w++;
             NumC[w+1]= num2 ;
             w++;
             }
              else
                {
          cout << "Divisao vale: (-"<< num1<< "/"<< num2<<")"<<"i";
          NumC[w]= num1;
          w++;
          NumC[w+1]= num2 ;
          w++;
                }


        }

   }


        ~NumComplex()
        {
            cout <<"You was terminate\n";
        }
private:

int num1;
int num2;
int sel;

};
int main()
{
    int i;
    cout<<"\n\n --------------------------------Adicao--------------------------------\n\n";
    for (i =0; i <= 9; i++)
    {
    cout << "Numeros: "<< 2 <<" e "<< i+1<< ", expoente: "<<i<<"\n";
    NumComplex N1(2,i+1, i);
    N1.SomaPrint();
    cout<<"\n";
    }

     cout<<"\n\n --------------------------------Subtracao------------------------------\n\n";


    for (i =0; i <= 9; i++)
    {
    cout << "Numeros: "<< 2 <<" e "<< i+1<< ", expoente: "<<i<<"\n";
    NumComplex N1(2,i+1, i);
    N1.SubtraPrint();
    cout<<"\n";
    }
    cout<<"\n\n --------------------------------Produto------------------------------\n\n";


    for (i =0; i <= 9; i++)
    {
    cout << "Numeros: "<< 2 <<" e "<< i+1<< ", expoente: "<<i<<"\n";
    NumComplex N1(2,i+1, i);
    N1.ProdutoPrint();
    cout<<"\n";
    }

     cout<<"\n\n --------------------------------Divisao------------------------------\n\n";

     for (i =0; i <= 9; i++)
    {
    cout << "Numeros: "<< 2 <<" e "<< i+1<< ", expoente: "<<i<<"\n";
    NumComplex N1(2,i+1, i);
    N1.DivisaoPrint();
    cout<<"\n";
    }

    cout<<"\n\n------------------------------Teste Array------------------------------\n\n";

    for (i =0; i <= w; i++)
    {
      //-------------------DESENVOLVIMENTO ALPHA------------------------------------
     cout <<NumC[i] ;

     cout<<"\n";

    }
    string n = "Sanders";
    cout<<n;
    delete NumC;

    return 0;
}
