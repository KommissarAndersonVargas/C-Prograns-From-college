#include <iostream>

using namespace std;




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
        reidade(idade);
        data = d;
        cpf = c;


    }

    int reidade(int idade)
    {
        return idade;
    }


};

class Worker : public Person{

private:
    int id;
    double salario;
public:
    int asal[100];
    Worker( string n, int i, int d, int c, int iD, double sal) : Person(n,  i,  d,  c)
    {
        id = iD;
        salario = sal;
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

class UnidadeOne{

public:
    string membros[100];

    ~UnidadeOne()
    {

    }

    void LitaMembros()
    {
        int i;

        cout << "Membros da Unidade 1: ";

        for (i = 0; i < (sizeof(membros)/4); i++)
        {
           cout << "\n"<< membros[i] << endl;
        }
    }


};

class UnidadeTwo{

public:
    string membros2[100];
    // fazer um array de cpfs depois
 ~UnidadeTwo()
    {

    }
    void LitaMembros2()
    {
        int i;

        cout << "Membros da Unidade 2: ";

        for (i = 0; i < (sizeof(membros2)/4); i++)
        {
           cout << membros2[i] << endl;
        }
    }


};



int main()
{
    int i, u;
    string nome ;
    long int cpf;
    int id;
    double salario;

     //TRANSFORMAR OS ARAYS EM LOCAIS PARA EVITAR O BUG DO LOOP  fazer um get que retorna o nome para um arry em main

    //Person *p = new Person(nome,idade, data, cpf);
    Worker wk( nome , 1, 1,  1, cpf, 1); // PAREI DAQUI
    Student st(nome, 1, 1, cpf, 1) ;
    UnidadeOne *f = new UnidadeOne();
    UnidadeTwo *g = new UnidadeTwo();

// deixar so um if e um loop


           cout << "Bem vindo ao sistema de trasnferencia de unidades\n";
           int num;
           cout << "Digite o numero de pessoas da unidade: ";
           cin >> num;
           cout << endl;



           for (i = 0; i< num; i++)
           {

           cout<< "\nEntre com o nome da pessoa: ";
           cin >> nome;
           cout << endl;
           cout<< "Entre com o cpf da pessoa: ";
           cin >> cpf;
           cout << endl;
          // Worker(nome , 1, 1,  cpf,1, 1);
          // UnidadeOne *f = new UnidadeOne();
          // UnidadeTwo *g = new UnidadeTwo();
           f->membros[i] = nome;

           }


           cout << "Bem vindo ao sistema de trasnferencia de unidades\n";
           cout << "Digite o numero de pessoas da unidade: ";
           cin >> num;
           cout << endl;




           for (i = 0; i < num ; i++)
           {

           cout<< "\nEntre com o nome da pessoa: ";
           cin >> nome;
           cout << endl;
           cout<< "Entre com o cpf da pessoa: ";
           cin >> cpf;
           cout << endl;
          // Student(nome, 1, 1,cpf,1);
           //UnidadeOne *f = new UnidadeOne();
           g->membros2[i] = nome;

           }


    return 0;
}



