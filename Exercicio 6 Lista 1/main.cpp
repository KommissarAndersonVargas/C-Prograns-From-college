#include <iostream>
// ESTE ARQUIVO CONTEM O EXERCÍCIO 6 E 7
using namespace std;

class Aluno
{
private:
    string nome;
    int codigo;
    double nota1;
    double nota2;
    double nota3;
    double media;
public:
    Aluno ( string n, int co, double n1,double n2,double n3 )
    {
           nome = n;
           codigo = co;
           nota1 = n1;
           nota2 = n2;
           nota3 = n3;
    }

    double calcmedia()
    {

           return media = (nota1 + nota2 + nota3) / 3;

    }

     void conceito (void)
     {
         cout << "\n---------------Conceito do Respectivo do discente "<< nome << "------\n";
         if( calcmedia() >= 6)
         {
             cout << "Aprovado\n";
         }
         else
         {
              cout << "Reprovado\n";
         }
     }

     void infos()
     {
         cout<< "\n----------------------------------------\n";
         cout << "Nome do aluno: "<< nome << endl;
         cout << "Codigo: " << codigo<< endl;
         cout << "Nota 1: " << nota1<< endl;
         cout << "Nota 2: " << nota2<< endl;
         cout << "Nota 3: " << nota3<< endl;
         cout << " Media: " << media << endl;
     }


};


int main()
{
    string nome;
    int codigo;
    int qtd;
    double no1, no2, no3;
    int i;

    cout << "Bem vindo a portal do professor UERGS solis.ge (sistema de gestao educacional)\n ";
    cout << "Entre com o numero de alunos a calcular a media: ";
    cin>> qtd;

    for(i=0; i<qtd; i++)
    {


    cout << "\nEntre com o nome do aluno a ser calculado a media: ";
    cin>> nome;
    cout << endl;
    cout << " Entre com o codigo do "<< i << " aluno: ";
    cin >> codigo;
    cout << endl;
    cout << " Entre com a 1 nota: ";
    cin >> no1;
    cout << endl;
    cout << " Entre com a 2 nota: ";
    cin >> no2;
    cout << endl;
    cout << " Entre com a 3 nota: ";
    cin >> no3;
    cout << endl;

    Aluno vivente(nome, codigo, no1, no2,no3);
    vivente.conceito();
    vivente.infos();
/*
    cout << " Entre com o numero de alunos ao calcular a media ou digite -1 para sair: ";
    cin>> qtd;
    if(qtd == -1)
    {
        break;
    }

*/
   }
    return 0;
}
