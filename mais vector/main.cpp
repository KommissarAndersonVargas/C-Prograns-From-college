#include <iostream>
#include <vector>
#include <stdio.h>
#include <bits/stdc++.h>

using namespace std;


class Num {

public:

    int num1, num2;

    Num(int n, int zh)
    {
        num1 =n;
        num2 = zh;
    }

    Num operator+ (Num& n){

    return Num (n.num1+ num1, n.num2 +num2);

    }




};




int main()
{
    Num e(3,4);
    Num f(3, 5);
    Num c(0,0);

    c = e + f;

    cout << c.num1;


    vector<int>vet;

    vet.push_back(2);
    vet.push_back(8);
    vet.push_back(1);
    vet.push_back(98);
    vet.push_back(3);
    vet.push_back(9);
    vet.push_back(87);
    vet.push_back(31);


    // vet.clear();

    cout << vet.front() << endl;
    cout << vet.back() << endl;

    cout << "\n\n Lista os vetores\n";


    sort(vet.begin(), vet.end());


    for(int i=0; i<vet.size(); i++)
    {
        printf("%d\n", vet[i]);

    }

    cout << "Hello world!" << endl;

    return 0;
}
