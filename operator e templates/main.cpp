#include <iostream>

using namespace std;

class Complexo {

public:
    int real, imag;

    Complexo(int c1, int c2){

    real = c1;
    imag = c2;



    }

    Complexo operator*( Complexo &num){


    return Complexo(num.real *real, num.imag * imag);

    }



   void display()
   {
       cout << " Parte real: " << real << endl;
       cout << " Parte imaginaria: " << imag << endl;


   }

   /*
   ostream& operator<<(ostream& os, const Date& dt)
{
    os << dt.mo << '/' << dt.da << '/' << dt.yr;
    return os;
}
   */

   friend ostream& operator<< (ostream& os,const Complexo&c)
   {

       os << c.real << "\n"<<c.imag << "\n";
       return os;

   }




};



int main()
{

    Complexo complea(3,4);
    Complexo compleb(7, 4);
    Complexo c=  Complexo(0,0);
    c= complea*compleb ;



    //c.display();
    cout << c;

    return 0;
}
