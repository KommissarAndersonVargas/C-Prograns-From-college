#include <iostream>
#include <exception>
#include <stdexcept>
#include <vector>
using namespace std;
/*
class TrataExcecao{

public:
int num;

 TrataExcecao(int n){

 num = n;


 }

 void Message(){
 cout << "erro na linha" << num << endl;


 }



};



int main()
{

    int numpecas = 400;


    try{

    if (numpecas > 50){


    throw TrataExcecao(__LINE__);

    }

    }

    catch(TrataExcecao &TE)
    {
        TE.Message();
    }
     catch(...)
    {

    }



    cout << "Hello world!" << endl;
    return 0;
}
*/
int main()
{
     vector<int> vet(4);


    try{


    vet.at(6) = 10;
    cout <<vet[0] << endl;



    }



    catch(exception &ex)
    {
      cout<<  ex.what() << endl;
    }
     catch(...)
    {

    }



  return 0;
}
