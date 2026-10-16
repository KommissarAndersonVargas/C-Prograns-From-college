#include <iostream>
#include <math.h>

using namespace std;

class Complexo
{
    private:
        int real;
        int imag;
    public:

        int vetreal[100];
        int vetimag[100];

        void Complex(float real,float imag)
        {
            setReal(real);
            setImag(imag);
        }
        float getReal()
        {
            return real;
        }
        float getImag()
        {
            return imag;
        }
        void setReal(float real)
        {
            this->real = real;
        }
        void setImag(float imag)
        {
            this->imag = imag;
        }

        void imp(int u)
        {
            int i;
            for (i=0; i<u; i++)
            {
                cout << "Parte real: " << vetreal[i] << endl;
                cout << "Parte imag: " << vetimag[i] << endl;
            }
        }
        void impmult(int u)
        {
            int i;
            for (i=0; i<u; i++)
            {
                cout << "Parte real: " << vetreal[i]*real  << endl;
                cout << "Parte imag: " << vetimag[i]*imag << endl;
            }
        }

};


int main()
{
    int i, u, re, ima;

    Complexo *c = new Complexo();

    cout << "Tipo: " << typeid(c).name() << endl;

    cout << " Digite o numero do loop: " ;
    cin >> u;
    cout << endl;
    cout << "------------------------------------------------------------------\n";
    cout << endl;

    for (i = 0; i < u; i++ )
    {
    cout << " Digite a parte real: ";
    cin >> re;
    cout << endl;
    cout << " Digite a parte imaginaria: " ;
    cin >> ima;
    cout << endl;

    c->Complex(re, ima);
    c->vetreal[i] = c->getReal();
    c->vetimag[i] = c->getImag();


    }

    c->imp(u);
    cout << endl;

    cout << "Digite o numero complexo a ser multiplicado " << endl;
    cout << "Parte real: ";
    cin >> re;
    cout << endl;
    cout << "Parte imaginaria: ";
    cin >> ima;
    cout << endl;
    c->Complex(re, ima);


    cout << endl;
    c->impmult(u);



    return 0;
}
