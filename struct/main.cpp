#include <iostream>

using namespace std;

int main()
{
    struct perfil
    {
        string nome;
        string sobreNome;
        int idade;
        float peso;
        string profissao;
    };

    perfil candidato1;

    candidato1.nome="Anderson";
    candidato1.sobreNome="Vargas";
    candidato1.idade=19;
    candidato1.peso= 48.8;
    candidato1.profissao= "Engenheiro";


    cout << "Perfil 1" << endl;
    cout <<"\n\n";
    cout << candidato1.nome << endl;
    cout << candidato1.sobreNome << endl;
    cout << candidato1.idade << endl;
    cout << candidato1.peso << endl;
    cout << candidato1.profissao << endl;

    enum exp {fabrica= 8, faculdade=6, cursos= 20, linguagens= 5};


    cout <<"\n\n";
    cout << "Experiencias\n";
    cout << fabrica << endl;
    cout << faculdade << endl;
    cout << cursos << endl;
    cout << linguagens << endl;



    return 0;
}
