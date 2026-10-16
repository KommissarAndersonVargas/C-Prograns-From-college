#ifndef CONTAS_H_INCLUDED
#define CONTAS_H_INCLUDED

#include <iostream>

using namespace std;

class Conta {

public:
     int id = 1231;

         Conta(int money, int numconta){

           saldo = money;
           nconta = numconta;

         }
         void desconta ( int money )
         {
             saldo = saldo - money;
         }
         void display ()
         {
             cout << "Sua id: "<< id<< endl;
             cout << "N da conta:  "<< nconta<< endl;
             cout <<"O seu saldo: "<< saldo<< endl;
         }


protected:

    int nconta;
    int saldo;




};




#endif // CONTAS_H_INCLUDED
