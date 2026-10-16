#include <iostream>
#include <vector>

using namespace std;

class Num{
public:
int i;
Num ()
{

}


 vector<int>vet;

void display()
{
    int i;
    for (i=0; i<vet.size(); i++)
    {
        cout << vet[i] << endl;
    }
}

};





int main()
{
    Num c;
    c.vet.push_back(4);
    c.vet.push_back(7);
    c.vet.push_back(2);


    c.display();

    return 0;
}
