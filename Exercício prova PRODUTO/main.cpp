#include <iostream>

using namespace std;

class Processo{

public:
    string nomeprocesso;
    string nomeproduto;
    string lisaeta[3000];

  void proce1(string namepross, string name)
  {
      nomeprocesso = namepross;
      nomeproduto = name;
  }
   void display(int u)
   {
       int i;
       cout << "Nome do processo: " << nomeprocesso << endl;
       cout << "Nome do produto: " << nomeproduto << endl;
       for (i=0; i < u; i++ )
       {
           cout <<"etapa(s) de processamento(s): "<< lisaeta[i] << endl;
       }

   }

};
class EtapadoProcesso : public Processo{
private:
    string descricao;
    int nordena;
    int tempo;



public:
   void et(string nomedes, int ordena, int time)
   {
       descricao = nomedes;
     nordena = ordena;
     tempo = time;

   }

   void display2()
   {
     cout<<"Descricao da etapa: " << descricao <<endl;
     cout << "Numero de ordenamento da etapa: "<< nordena << endl;
     cout << "Duracao em minutos(min): "<< tempo;
   }

};
int main()
{
    int u, i, ordena, time;
    string ets, nomeetapa, namep, name ;
    Processo *p1 = new Processo();
    EtapadoProcesso *e1 = new EtapadoProcesso();

   cout << "Entre com o nome do processo do produto selecionado: ";
   getline(cin,namep);

   cout << endl;
   cout << "Digite o nome do produto: ";

   getline(cin,name);
   cout << endl;

   p1->proce1(namep, name);

    cout << " Quantas etapas tem o processo ?: " ;
    cin >> u;
    cout<<endl;

    for (i=0; i < u; i++ )
    {
        cout << "Qual eh a etapa: ";
        cin >> ets;
        //getline(cin,ets);
        cout << endl;
        p1->lisaeta[i] = ets;

    }
    cout << "\n\n";
    p1->display(u);
    cout << "\n\n";


   cout << "Informacoes das etapas\n";
    for (i=0; i < u; i++ )
    {

        cout << "\nDigite o tempo de duracao da etapa " << p1->lisaeta[i] << " em minutos(min): ";
        cin >> time;
        cout << endl;
        nomeetapa = p1->lisaeta[i] ;
        e1->et(nomeetapa,i+1, time);
        e1->display2();
        cout << endl;
    }



    cout << endl;
    return 0;
}
/*
Na classe Processo os atributos e métodos estão públicos, em vez de protected, para poderem ser transmitidos por herança mais facilmente e para poderem ser acessados no programa principal se necessário, pois não há muitas informações relevantes do produto que sejam necessários de serem ocultos.

Já na classe EtapaDoprocesso estão privados os atributos, porque o ordenamento e tempo de processamento são informações a nível comerciais que não podem ser transmitidas,  pois contém informações importantes da confecção do produto, por isso só o método está publico para podemos acessa-lo e acessar indiretamente as variáveis.


*/
