#include <iostream>

using namespace std;


class Student
{
    public:
        double grade1, grade2;
        string nome1, nome2;

       Student(string n, string n2)
        {
            nome1 = n;
            nome2 = n2;
        }


        Student();
        Student(double, double);
        double getAverage();
};

Student::Student()
{
    grade1 = 0;
    grade2 = 0;
}

Student::Student(double g1, double g2)
{
    grade1 = g1;
    grade2 = g2;
}

double Student::getAverage()
{
    return (grade1+grade2)/2;
}


int main()
{
    Student alu[5] = { Student(1,4), Student(4, 3) };

/*
    Student alu[5] = { {9,9},
                       {7,8},
                       {56,6},
                       {1,5} };


    cout<<alu[0].getAverage()<<endl;
    cout<<alu[1].getAverage()<<endl;
    cout<<alu[2].getAverage()<<endl;
    cout<<alu[3].getAverage()<<endl;
    cout<<alu[4].getAverage()<<endl;
    */
/*
    cout<< alu[0].nome1 + alu[0].nome2  <<endl;
    cout<< alu[0].nome2 <<endl;
     alu[1].nome1 ="xxxx";
    cout<< alu[1].nome1<<endl;
*/

// ----------------ORGANIZANDO O ARRAY-----------------------------------
int w;
 int j=0;
 float cop;
 int i;
 // BOOBLE SHORT
 for (w=1; w< 4; w++)
 {
 for (i =0; i <4 -1; i++ )
 {
 if(alu[i].grade1< alu[i+1].grade1)
 {
 cop =alu[i].grade1;
 alu[i].grade1 = alu[i+1].grade1;
 alu[i+1].grade1 = cop;
 }
 }
 j++;
 }

 cout << "\nArrumando \n";
for (i =0; i <4 -1; i++ )
 {
     cout << alu[i].grade1 << endl;

 }
    return 0;
}

