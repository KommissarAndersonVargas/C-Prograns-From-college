#include <iostream>

using namespace std;

class Lote
{
    public:
        string produto;
        int codigo;
        int quantidade;
        void imprimeLote(void)   // Metodo I
        {
            cout << "Lote: " << (*this).codigo << std::endl;
            cout << "-titular: " << (*this).produto << std::endl;
            cout << "-quantidade: " << (*this).quantidade << std::endl << std::endl;
        }
        void inicializaLote(string produto, int codigo, int quantidade) // Metodo II
        {
            (*this).produto = produto;
            (*this).codigo = codigo;
            (*this).quantidade = quantidade;
        }
        void remover(int quantidade)  // Metodo III
        {
            this->quantidade -= quantidade;
        }
        void adicionar(int unidades)  // Metodo IV
        {
            this->quantidade += unidades;
        }
        void transferir(class Lote * LoteDestino,int quantidade)
        {
            if((*this).quantidade >= quantidade)
            {
                remover(quantidade);
                (*LoteDestino).adicionar(quantidade);
            }
        }

};
int main()
{
    return 0;
}
