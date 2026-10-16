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
    int aidade[100] = {} ;
    int adata[100] = {};
    string anome[100];
    string anome2[100];



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


        void imprivet()
        {
          int i;

            for (i=0; i<3; i++)
           {

            cout<< "Vetor ordenado: " << aidade[i]  << endl;


            }
            cout<< "\n\nPessoa Mais velha: "  <<  anome[0] <<" com idade " << aidade[0]  << endl;
            cout<< "Pessoa Mais nova: " << anome[2] <<" com idade " << aidade[2] << endl;

          }


           void imprimidata()
           {
               int i;
                for (i=0; i<3; i++)
           {

            cout<< "Vetor ordenado: " << adata[i]  << endl;


            }
            cout<< "\n\nPessoa menos tempo de casa: " << anome2[2] << " entrou no mes:  "<< adata[2]  << endl;
            cout<< "Pessoa com mais tempo de casa: " << anome2[0] << " entrou no mes:  "<< adata[0]  << "\n\n";
           }

};

class Worker : public Person{

private:
    int id;
    double salario;
public:
    int asal[0];
    Worker( string n, int i, int d, int c, int iD, double sal) : Person(n,  i,  d,  c)
    {
        id = iD;
        salario = sal;
    }
     void displaysal()
    {
        int i;
        for (i =0; i<3; i++)
        {
        cout<< "salario: " << asal[i] << "$"<< endl;
        }

        cout<< "Maior salario: " << asal[0] << "$"<< endl;
        cout<< "Menor salario: " << asal[2] << "$"<< endl;
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
    long int mez;
    long int ano;
    long int data;
    long int cpf;
    int id;
    double salario;


     //Student *a = new Student(nome,idade, data, cpf, cpf); //ARRUMAR AS INFORMAÇÕES DESSE CONSTRUTOR SE NÃO VAI FICAR ERRADO

    Person *a = new Person(nome,idade, data, cpf);
    Worker *wk = new Worker( nome , idade, data,  cpf, id, salario); // PAREI DAQUI


//---------------------------------IDADES--------------------------------------------------
    cout << "Bem vindo ao sistema de gestao educacional\n\n";
    cout << "--------Entre com os dados das pessoas-------\n";

     for (i=0; i<3; i++)
     {
    cout<< "\n Secao de atribuicao: " << i << " entre com as informacoes" << endl;
    cout<< "\nEntre com o nome da pessoa: ";
    cin >> nome;
    cout << endl;
    cout<< "Entre com a idade da pessoa: ";
    cin >> idade;
    cout << endl;
    cout<< "Entre com a data de ingresso da pessoa mes: ";
    cin >> data;
    cout << endl;
    cout<< "Entre com o cpf da pessoa: ";
    cin >> cpf;
    cout << endl;


    a->aidade[i] = idade;
    a->adata[i] = data;
    a->anome[i] = nome;

   // Student *a = new Student(nome,idade, data, cpf, cpf);

    Person *a=  new Person(nome,idade, data, cpf); // ENTRA COM OS DADOS DAS PESSOAS EM GERAL
    Worker( nome , idade, data,  cpf, id, salario); // PAREI DAQUI





     }
//--------------------------------------------------------------------------------------------------

// ------------------------------SALARIOS DOS FUNCIONARIOS------------------------------------------
    cout << "Bem vindo ao PowerInd 4.0 gestao de impresas\n\n";
for (i=0; i<3; i++)
     {
    cout<< "\n Secao de atribuicao: " << i << "  entre com as informacoes" << endl;
    cout <<"\nEntre com as informacoes dos colaboradores\n";
    cout<< "Entre com o ID do funcionario: ";
    cin >> id;
    cout << endl;
    cout<< "Entre com o salário do funcionario: ";
    cin >> salario;
    cout << endl;


    wk->asal[i] = salario;

   // Student *a = new Student(nome,idade, data, cpf, cpf);

    Worker( nome , idade, data,  cpf, id, salario); // PAREI DAQUI


     }



//--------------------------------- Aruma um vetor--------------------------------------------------
    a->anome2[0] = a->anome[0];
    a->anome2[1] = a->anome[1];
    a->anome2[2] = a->anome[2];

      int w,cop;
      string cop1;

         for (w=1; w< 3; w++)
         {

         for (i =0; i <3 -1; i++ )
         {
            if(a->aidade[i] < a->aidade[i+1])
              {

                     cop =a->aidade[i];
                     cop1 =  a->anome[i];

                     a->aidade[i] = a->aidade[i+1];
                      a->anome[i] =  a->anome[i+1];
                     a->aidade[i+1] = cop;
                      a->anome[i+1] = cop1;

                 }

              }

            }


     a->imprivet();
//-----------------------------------Aruma vetor de ingresso----------------------------------------


 for (w=1; w< 3; w++)
         {

         for (i =0; i <3 -1; i++ )
         {
            if(a->adata[i] < a->adata[i+1])
              {
                  /*
                     cop =a->adata[i];
                     a->adata[i] = a->adata[i+1];
                     a->adata[i+1] = cop; */
                     cop =a->aidade[i];
                     cop1 =  a->anome2[i];

                     a->aidade[i] = a->aidade[i+1];
                      a->anome2[i] =  a->anome2[i+1];
                     a->aidade[i+1] = cop;
                      a->anome2[i+1] = cop1;


                 }

              }

            }

 a->imprimidata();

//--------------------------------- Aruma um vetor--------------------------------------------------



         for (w=1; w< 3; w++)
         {

         for (i =0; i <3 -1; i++ )
         {
            if(wk->asal[i] < wk->asal[i+1])
              {

                     cop =wk->asal[i];
                     wk->asal[i] = wk->asal[i+1];
                     wk->asal[i+1] = cop;

                 }

              }

            }

  wk->displaysal();

//cout << "O vetor salario: " << wk->asal[0] << endl;


    return 0;
}



