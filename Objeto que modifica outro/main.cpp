#include <iostream>

using namespace std;
class Objetus
{
public:
    int peso;
    int volume;
    void modifica(Objetus *modificado)
    {
        peso = 10; // muda o valor para objeto1 nessa linha quando objeto2 é passado na função/metodo?
        modificado->peso=20;
    }
};

int main()
{
    Objetus objeto1;
    Objetus objeto2;

    objeto1.peso = 5;
    objeto1.volume = 1;
    objeto2.peso = 2;
    objeto2.volume = 3;

    objeto1.modifica(&objeto2);

    cout << "Peso: "<< objeto1.peso<<" "<< "Volume: "<<objeto1.volume<< endl;
    cout << "Peso: "<< objeto2.peso<<" "<< "Volume: "<<objeto2.volume<< endl;


    return 0;
}
