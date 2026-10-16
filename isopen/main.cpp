#include <iostream>
#include <fstream>
using namespace std;

int main()
{

    ofstream arquivo;

    arquivo.open("Arquivo do anderson.txt");
    arquivo << " Anderson loves Larah\n";
    arquivo << "And\n";
    arquivo << "Larah loves Anderson\n";

    arquivo.close();

/*
    ifstream leitura;

    string linha;
    //arquivo.close();

    leitura.open("Arquivo do anderson.txt");

    if(leitura.is_open())
    {
        while (getline(leitura, linha))
        {
            cout << linha << "\n";
        }
    }

    else
    {
        cout << "ERROR\n";
    }

    leitura.close();
*/
    return 0;

}
