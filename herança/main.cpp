#include <iostream>

using namespace std;

class Carro{


public:
Carro(int n)
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
  setNumPo(int np)
{
    if (np ==2)
    {
        portas = 2;
    }
    else if (np == 4)
    {
        portas = 4;
    }
    else
    {
        portas = 2;
    }
}
   DisTipo()
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

class  WarCar : public Carro
{

public:
     WarCar(int n, string no) : Carro(n)
     {
         nome = no;
     }
    void especifi(bool ar, bool mor, bool mini, bool bli, int ammo)
    {
        cout << "N° armas: "<< armas<< "\n";
        cout << "Morteiro?: "<< morteiro<< "\n";
        cout << "Minigun?: "<< minigun<< "\n";
        cout << "Blindagem?: "<< blindagem<< "\n";
        cout << " QTD MUNICAO: "<< muniRes<<"\n";

    }
    void DispWar()
    {
        cout<<"Nome: "<< nome;
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
    //Carro1 cw;

    WarCar *Car = new WarCar(2, "NewWarCar");


     Car->DispWar();

   // cw.setNumPo(1);



    return 0;
}

/*
class Cache{
    protected:
    int n1 =1 , n2, soma;

    public:
         setNum(int num1, int  num2 )
         {
             n1 = num1;
             n2 = num2;
         }

         int getSoma()
         {
             soma = n1 + n2;
             return soma;
         }

};

 class Caixa2 : public Cache{



 };

int main()
{
    Caixa2 d1;
    Cache c1;
    d1.setNum(4, 10);
    // É para dar erro mesmo pois é protected cout <<c1.n1<<"\n";
    cout << d1.getSoma() << endl;
    return 0;
}
*/
