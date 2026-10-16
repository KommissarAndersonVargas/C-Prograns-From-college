#include <iostream>

using namespace std;

class Arvore
{
private:
    string tipo;
    int altura;
    public:
        void defineH(int h);
        void impriType();
};

 void Arvore :: defineH(int h)
    {
         if (h > 10)
         {
            /*this->*/tipo = "Amazonica";
         }
         else
            {

           /*this->*/tipo = "Europeia";
            }
    }
void Arvore ::impriType()
{
    cout<<tipo <<"\n";
}

int main()
{
   // cout << "Hello world!" << endl;
   Arvore av1;
   av1.defineH(50);
   av1.impriType();
    return 0;
}
