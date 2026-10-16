#include <iostream>

#include <vector>
#include <bits/stdc++.h>
using namespace std;

class App{

public:
    int num, num2;

    App(int n, int n2){

    num = n;
    num2 =n2;

    }

    void display(){

   cout << num << endl;
   cout << num2 << endl;
    }



};





int main()
{


   // cout << a.num2 << endl;

   std::vector<App>ve;
   ve.push_back(App(3,4));
   ve.push_back(App(9,2));


   // sort(ve.begin(), ve.end());

    int i;


    for (i=0; i<ve.size(); i++)
    {

         ve[i].display();
    }



    //cout << "Hello world!" << endl;
    return 0;
}
