#include <iostream>
#include<vector>

using namespace std;

class People{

public:
    int idade;
    int cod;

    People(int i, int c)
    {
        idade = i;
        cod = c;
    }



};



int main()
{

    People vet1[]={{1,1243}};
    cout << "idade: " << vet1[0].cod<< endl;

    vector<int>vet;

    vet.push_back(14);
    vet.push_back(5);
    vet[3] = vet[0]+vet[1];
    vet.push_back(4);
    vet.push_back(18);
    vet.push_back(20);
    vet.push_back(90);
    vet.push_back(10000);
    vet.push_back(324);
    cout <<vet[3];
    cout << "First: "<< vet.front() << endl;
    cout << "last: " << vet.back()<< endl;
    //cout << "middle: "<< vet.at();
    cout << "tam: " << vet.size()<< endl;

    //cout << "Hello world!" << endl;
    return 0;
}
