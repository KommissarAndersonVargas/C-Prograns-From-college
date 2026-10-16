#include <iostream>

using namespace std;
class Garrafa
{
protected:
    string conteudo;
    string material ;
    float volume;
public:
    Garrafa(string conteudo, string material, float volume)
    {
        this-> conteudo = conteudo;
        this -> material = material;
        this-> volume = volume;
    }
};

class GarrafaTermica : public Garrafa
{
private:
    string TipoDeCopo;
public:
    GarrafaTermica(string conteudo, string material, float volume, string TipoDeCopo /*Copo*/) : Garrafa(conteudo, material, volume)
    {
     //TipoDeCopo = Copo ;
     this->TipoDeCopo = TipoDeCopo;
    }

    void Display()
    {

        cout<< " Conteudo: "<< conteudo<<endl;
        cout<< " Material: "<< material<<endl;
        cout<< " Volume: "<< volume<<endl;
        cout<< " O Tipo de copo foi definido como: "<< TipoDeCopo<<endl;

       }




};


int main()
{
     GarrafaTermica g1 = GarrafaTermica("cha", "madeira", 2.0, "redondo");
     g1.Display();
    //cout << "Hello world!" << endl;
    return 0;
}
