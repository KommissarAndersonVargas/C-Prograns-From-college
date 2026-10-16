#ifndef JOGO_H_INCLUDED
#define JOGO_H_INCLUDED

using namespace std;

class Analiza{

public:
    void Soma(int c1, int c2, int c3);
    ~Analiza();

private:
    int carta1;
    int carta2;
    int carta3;

};
Analiza ::  ~Analiza()
{
    cout<<"Terminator\n";
}

#endif // JOGO_H_INCLUDED
