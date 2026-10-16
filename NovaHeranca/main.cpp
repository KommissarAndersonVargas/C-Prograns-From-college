#include <iostream>

using namespace std;

class Carro{


public:

Carro( int  n)
{
    if ( n == 1)
    {
        tipo = "Espostivo";
    }
     else if ( n == 2)
    {
         tipo = "Economico";
    }
     else if ( n == 3)
    {
         tipo = "luxo";
    }
    else{
         tipo = " obra e trabalhos gerais";
    }
}

   void DisTipo()
   {
       cout<< "O tipo eh: "<< tipo <<"\n";
   }
   void DiMotorEChassi (double mot, double cha)
   {
       motor = mot;
       chassi = cha;
       cout << "\nO motor eh:  "<< motor<< "  cv\n";
       cout << "\nO chassi eh:  "<< chassi<< "    ferro fundido\n";
   }


protected:
int rodas;
int portas;
string tipo;
double motor;
double chassi;



};

class WarCar : public Carro{

public:

     WarCar( int  n, string no) : Carro(n)
     {

         nome = no;
     }

    void especifi(int ar, bool mor, bool mini, bool bli, int ammo)
    {

        armas = ar;
        morteiro = mor;
        minigun = mini;
        blindagem = bli;
        muniRes=ammo;


        cout << "N armas: "<< armas<< "\n";
        cout << "Morteiro?: "<< morteiro<< "\n";
        cout << "Minigun?: "<< minigun<< "\n";
        cout << "Blindagem?: "<< blindagem<< "\n";
        cout << " QTD MUNICAO: "<< muniRes<<"\n";
        cout<<"Nome do carro:  "<< nome<<"\n";
         rodas =  6;
        cout<<"Rodas:  "<< rodas ;

    }


private:
    int armas;
    string nome;
    bool morteiro;
    bool minigun;
    bool blindagem;
    int muniRes;


};




int main()
{
    WarCar C2 =  WarCar(1,"Turbo");

    C2.especifi(10,3,1,1,4000);



    return 0;
}

