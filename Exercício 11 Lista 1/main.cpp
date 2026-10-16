#include <iostream>

using namespace std;

int pos = 0;

// funcionários e estudantes
//Todos devem ter um nome, idade, data de ingresso, e CPF
//Funcionários devem ter um Id e um salário
//Alunos devem ter um código de matrícula


//CODIGO EM PROCESSO TEM MUITA COISA PARA ARRUMAR


class Person
{
public:
    string nome;
    int idade;
    int data;
    int cpf;
    int aidade[100]  ;



     Person(string n, int i, int d, int c)
    {
        nome = n;
        idade = i;
        aidade[pos]= idade;
        data = d;
        cpf = c;


    }





    void imprivet()
    {




         cout<< "A pessoa mais nova eh eh: " << aidade[3]  << endl;
          cout<< "A pessoa mais velha eh: " << aidade[0]  << endl;

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
   int i;
   string nome ;




    int idade;
    long int data;
    long int cpf;
    int codigo;



    Person a = Person(nome,idade, data, cpf);


    cout << "Bem vindo ao sistema de gestao educacional\n\n";

     for (i=0; i<1; i++)
     {




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



   // ( a.aidade[i] = a.reidade(idade) );
    //Person a(nome,idade, data, cpf);

     Person a = Person(nome,idade, data, cpf);

    // a.aidade[0]= a.reidade(idade);

      pos++;

     }



   cout << " idade eh: " << idade<<endl;
   cout << " idade eh: " << a.aidade[0]<<endl;


    cout<<"\n\n";

    int cop;
    int w;
    int j=0;


                   // BOOBLE SHORT
    for (w=1; w< 3; w++)
    {

         for (i =0; i <3 -1; i++ )
         {
            if(a.aidade[i]> a.aidade[i+1])
              {

                     cop =a.aidade[i];
                     a.aidade[i] = a.aidade[i+1];
                     a.aidade[i+1] = cop;

               }

            }

    }



       a.imprivet();




    return 0;
}

