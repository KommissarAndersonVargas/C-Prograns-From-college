#include <iostream>



using namespace std;


// funcionários e estudantes
//Todos devem ter um nome, idade, data de ingresso, e CPF
//Funcionários devem ter um Id e um salário
//Alunos devem ter um código de matrícula
class Person
{
protected:
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
    string nome;
    int idade;
    long int data;
    long int cpf;
    int codigo;


    cout << "Bem vindo ao sistema de gestao educacional\n\n";
    cout << "Informacoes de estudantes\n";
    cout<< "Entre com o nome do aluno: ";
    cin >> nome;
    cout << endl;
    cout<< "Entre com a idade do aluno: ";
    cin >> idade;
    cout << endl;
    cout<< "Entre com a data de ingresso do aluno: ";
    cin >> data;
    cout << endl;
    cout<< "Entre com o cpf do aluno: ";
    cin >> cpf;
    cout << endl;
    cout<< "Entre com o codigo de matricula aluno: ";
    cin >> codigo;
    cout << endl;


    Student a = Student(nome, idade, data, cpf, codigo);

    a.display();
    cout<<"\n\n";



    string nome1;
    int idade1;
    long int data1;
    long int cpf1;
    long int id;
    double salario;


    cout << "Informacoes do funcionario \n";
    cout<< "Entre com o nome do funcionario: ";
    cin >> nome1;
    cout << endl;
    cout<< "Entre com a idade do funcionario: ";
    cin >> idade1;
    cout << endl;
    cout<< "Entre com a data de ingresso do funcionario: ";
    cin >> data1;
    cout << endl;
    cout<< "Entre com o cpf do funcionario: ";
    cin >> cpf1;
    cout << endl;
    cout<< "Entre com a id  do funcionario: ";
    cin >> id;
    cout << endl;
    cout<< "Entre com o  salario do funcionario: ";
    cin >> salario;
    cout << endl;



    Worker b = Worker(nome1, idade1, data1, cpf1, id, salario );


    cout<<"\n\n";
    b.display();

    return 0;
}
