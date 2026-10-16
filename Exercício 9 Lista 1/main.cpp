#include <iostream>

using namespace std;


// funcionários e estudantes
//Todos devem ter um nome, idade, data de ingresso, e CPF
//Funcionários devem ter um Id e um salário
//Alunos devem ter um código de matrícula
class Person
{
public:
    string nome;
    int idade;
    int data;
    int cpf;

     Person(string n, int i, int d, int c)
    {
        nome = n;
        idade = i;
        data = d;
        cpf = c;
    }

};

class Worker : public Person{

private:
    int id;
    double salario;
public:

    Worker( string n, int i, int d, int c, int iD, double sal) : Person(n,  i,  d,  c)
    {
        id = iD;
        salario = sal;
    }
     void display()
    {
        cout << "------------------------Worker informations------------------------\n";
        cout<< "Nome: " << nome << endl;
        cout<< "idade: " << idade << endl;
        cout<< "data: " << data << endl;
        cout<< "cpf: " << cpf << endl;
        cout<< "Id: " << id << endl;
        cout<< "salario: " << salario << "$"<< endl;


    }


};

class Student : public Person{
public:
    int cod;

     Student(string n, int i, int d, int c, int co)  : Person(n,  i,  d,  c) {


        cod = co;
    }

    void display()
    {
        cout << "------------------------Student informations------------------------\n";
        cout<< "Nome: " << nome << endl;
        cout<< "idade: " << idade << endl;
        cout<< "data: " << data << endl;
        cout<< "cpf: " << cpf << endl;
        cout<< "codigo: " << cod << endl;


    }
};

int main()
{


    Student a = Student("Jose Leite ", 21, 12022020, 121312, 9876);
    Worker b = Worker("Antoni Esmanioto", 35, 14081999, 121291, 987, 6500);

    a.display();
    cout<<"\n\n";
    b.display();

    return 0;
}
