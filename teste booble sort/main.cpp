#include <iostream>

using namespace std;

int main()
{

    int aidade[]={9,13,6, 67, 8, 1, 2};

     int w, i,cop;
     for (w=1; w< 7; w++)
         {

         for (i =0; i <7 -1; i++ )
         {
            if(aidade[i] < aidade[i+1])
              {

                     cop =aidade[i];
                     aidade[i] = aidade[i+1];
                     aidade[i+1] = cop;

                 }

              }

            }


      for (i =0; i <7; i++ )
      {


    cout << "Hello world na posi 1: " << aidade[i] <<endl;


      }
    return 0;
}
