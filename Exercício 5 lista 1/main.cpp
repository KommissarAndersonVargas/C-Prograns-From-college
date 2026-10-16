#include <iostream>
#include <stdlib.h>

#include <string.h>
#include <time.h>
#include <iomanip>
#include <sstream>

using namespace std;


class Conta
{
    public:
        string nome;
        int numero;
        float saldo;

        void imprimeConta(void)
        {
            cout << "Conta: " << numero << std::endl;
            cout << "-titular: " << nome << std::endl;
            cout << "-saldo: " << saldo << std::endl << std::endl;
        }
       /* string to_string()
        {
            string saida = nome;
            saida += " ";
            saida += std::to_string(numero);
            saida += " ";
            //saida += std::to_string(saldo);
            std::stringstream stream;
            stream << std::fixed << std::setprecision(2) << saldo;
            saida += stream.str();

            return saida;
        } */
        void inicializaConta(string nome, int numero, int saldo)
        {
            (*this).nome = nome;
            (*this).numero = numero;
            (*this).saldo = saldo;
        }
        void debitar(int valor)
        {
            saldo -= valor;
        }
        void creditar(int valor)
        {
            saldo += valor;
        }
        void transferir(class Conta * contaDestino,int quantia)
        {
            if(saldo >= quantia)
            {
                debitar(quantia);
                (*contaDestino).creditar(quantia);
            }
        }
};

int main()
{
    Conta contas;
    Conta contas2;

    int num;
    int i;
    int y;
    int w;
    int k;
    int op;
    string nome;

    srand(time(NULL));

     y = rand() % 4;
     w = 1000+ (rand() % 9999);
     k= 50+ (rand() % 9000);
     int y1 = rand() % 3;
     int w1 = 1000+ (rand() % 9999);
     int k1= 50+ (rand() % 9000);
     string lista[] ={"Carlos", "Bruno", "Alisson", "Luiz"};
     string nome1;


    if( y ==  0)
    {
        nome = "Joao";
    }
    if( y ==  1)
    {
        nome = "Pedro";
    }
    if( y ==  2)
    {
        nome = "Mateus";
    }
    if( y ==  3)
    {
        nome = "Marcos";
    }
     if( y ==  3)
    {
        nome = "Jose";
    }

    cout << "Quatas contas desejas criar ?  "<< endl;
    cin>> num;

    for(i = 1; i <= num; i++)
    {
       contas.inicializaConta(nome, w, k);
       contas2.inicializaConta(nome, w1, k1);
       contas.imprimeConta();
       cout<<"\n";
       contas2.imprimeConta();
       cout<<"Bem vindo ao banco uergs +\n  Qual operacao o senhor(a) deseja fazer ? \n 1- debito: \n 2- credito: \n 3- transferencia: \n";
       cin >> op;

       if ( op == 1)
       {
           int deb;
           int deb2;
           cout << "Operacao escolhida: Debito\n ....\n";
           cout << "Digite um valor para ser debitado das contas \n";
           cout << "Para a conta 1: ";
           cin >> deb;
           cout<<"\n";
           cout << "Para a conta 2: ";
           cin >> deb2;
           cout<<"\n";
           contas.debitar(deb);
           contas2.debitar(deb2);
       }
        if ( op == 2)
       {
           int cred;
           int cred1;
           cout << "Operacao escolhida: credito\n ....\n";
           cout << "Digite um valor para ser creditado nas contas \n";
           cout << "Para a conta 1: ";
           cin >> cred;
           cout<<"\n";
           cout << "Para a conta 2: ";
           cin >> cred1;
           cout<<"\n";

           contas.creditar(cred);
           contas2.creditar(cred1);
       }
        if ( op == 3)
       {
           int transf;
           int transf2;
           cout << "Operacao escolhida: transferencia\n ....\n";
           cout << "Digite um valor para ser tranferido \n";
           cout << "Trnsferir da conta 1 para a 2: ";
           cin >> transf;
           cout <<"\n";
           cout << "Trnsferir da conta 2 para a 1: " ;
           cin >> transf2;
           cout <<"\n";
           contas.transferir(&contas2, transf);
           contas2.transferir(&contas, transf2);
       }

       contas.imprimeConta();
       contas2.imprimeConta();
       cout<<"\n-----------------------------------------------------Novas contas---------------------------------------\n";
        y = rand() % 4;
     w = 1000+ (rand() % 9999);
     k= 50+ (rand() % 9000);

    if( y ==  0)
    {
        nome = "Joao";
    }
    if( y ==  1)
    {
        nome = "Pedro";
    }
    if( y ==  2)
    {
        nome = "Mateus";
    }
    if( y ==  3)
    {
        nome = "Marcos";
    }
     if( y ==  3)
    {
        nome = "Jose";
    }

    }


    /*
    cout<< endl;
    cout << nome << endl;
    cout << w << endl;
    cout << k << endl;
*/

    return 0;
}
