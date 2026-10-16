#include <iostream>
#include<string.h>;

using namespace std;
class Garrafa
{

    public:

        Garrafa(string mat,string cont,float vol)
        {
            material = mat;
            conteudo = cont;
            volume = vol;

        }
        void impri()
        {
            cout << " Material de Garafa: " << material <<endl;
            cout << " Conteudo de Garafa: " <<  conteudo <<endl;
            cout << " Volume de Garafa: " <<  volume <<endl;

        }
        ~Garrafa()
        {
            cout<<"CLASSE EXTERMINADA\n\n\n";
        }
    private:
   string material;
   string conteudo;
   float volume;

};
int main()
{
   Garrafa Btt1("Aluminio", "cha", 1.00);
   Btt1.impri();
   cout<<endl;

   int a[] ={1,2,3,4};
   int i;
   for(i=0; i<4; i++)
   {
       a[i] = a[i] *2;
   }
   for(i=0; i<4; i++)
   {
        cout <<a[i]<<"\n";
   }
   cout<<"\n\n";
    for(i=0; i<4; i++)
   {
         cout <<a[i]<<"\n";
   }

    return 0;
}
/*
class Garrafa
{
                                         //DESTRUTORES E DELETE COM PONTEIROSSS
    public:
       void modifica(int num)
        {
            if (num == 1)
            {
            material = "plastico";
            conteudo = "suco";
            volume =1.5;
            }
              if (num > 1)
            {
            material = "vidro";
            conteudo = "vinho";
            volume =2.5;
            }
        }
        void impri()
        {
            cout << " Material de Garafa: " << material <<endl;
            cout << " Conteudo de Garafa: " <<  conteudo <<endl;
            cout << " Volume de Garafa: " <<  volume <<endl;

        }
        ~Garrafa()
        {
            cout<<"CLASSE EXTERMINADA";
        }
    private:
   string material;
   string conteudo;
   float volume;

};
int main()
{
    Garrafa *Bottle1 = new Garrafa;

    Bottle1->modifica(1);
    Bottle1->impri();

    delete Bottle1;

    return 0;
}
*/
/*
class Garrafa
{
    public:
       void modifica(int num)
        {
            if (num == 1)
            {
            material = "plastico";
            conteudo = "suco";
            volume =1.5;
            }
              if (num > 1)
            {
            material = "vidro";
            conteudo = "vinho";
            volume =2.5;
            }
        }
        void impri()
        {
            cout << " Material de Garafa: " << material <<endl;
            cout << " Conteudo de Garafa: " <<  conteudo <<endl;
            cout << " Volume de Garafa: " <<  volume <<endl;

        }
        ~Garrafa()
        {
            cout<<"CLASSE EXTERMINADA";
        }
    private:
   string material;
   string conteudo;
   float volume;

};
int main()
{
    Garrafa Bottle1;

    Bottle1.modifica(1);
    Bottle1.impri();
    cout<<"\n\n";
    Bottle1.modifica(2);
    Bottle1.impri();


    return 0;
}
*/
/*
//PROGRAMA MAIS SIMPLES
class Garrafa
{
    public:
   string material = "plastico";
   string conteudo = "vinho";
   float volume =2.5;
};
int main()
{
    Garrafa Bottle1;

    cout << " Material de Garafa: " <<  Bottle1.material <<endl;
    cout << " Conteudo de Garafa: " <<  Bottle1.conteudo <<endl;
    cout << " Volume de Garafa: " <<  Bottle1.volume <<endl;

    return 0;
}

*/
