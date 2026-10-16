#include <iostream>

#include <stdexcept>
#include <limits>
#include <iostream>
/*
using namespace std;
float calculaPrecoTransporte(float peso)
{
 if ((peso > 120.0) || (peso < 0.0))
 throw invalid_argument("Peso fora da faixa…");
 return 20 + 20 * peso;
}
int main()
{
 float peso = 121.0;
 try
 {
 cout << calculaPrecoTransporte(peso) << endl;
 }
 catch (invalid_argument& e)
 {
 cerr << e.what() << endl;
 return -1;
 }
 cout << "Seguiu a diante" << endl;
 return 0;
}
*/
/*
class TrataMinhaExcecao
{
 public:
 TrataMinhaExcecao(int n)
 {
 Linha = n;
 }
 void Mensagem()
 {
 std::cout << "Muitas pecas – linha: " << Linha << std::endl;
 }
 private:
 int Linha;
};
int main()
{
 int numPecas =400;
 try
 {
 if (numPecas > 50)
 { // lanca excecao
 throw TrataMinhaExcecao(__LINE__); // cria objeto
 } // pula para o catch
 if (numPecas < 0)
 throw "No. negativo de pecas!"; //o tipo lançado aqui
 //deve ser recebido no catch
 std::cout << "Transporte para ";
 std::cout << numPecas << " pecas." << std::endl;
 }

 catch (TrataMinhaExcecao& TME)
 {
 TME.Mensagem();
}
 catch (...) // aceita qualquer outro objeto não especificado
 {
 std::cout <<"Ocorreu um erro. Eh tudo que sei." << std::endl;
 }
 return 0;
}

*/
using namespace std;
int main()
{
 int numPecas =400;

 try
 {

 if (numPecas > 50)
 { // lanca excecao
 throw"Muitas pecas\n" ;// cria objeto
 } // pula para o catch

 }

 catch (const char * t)
 {
  cout << t << endl;
}
 catch (...) // aceita qualquer outro objeto não especificado
 {
 std::cout <<"Ocorreu um erro. Eh tudo que sei." << std::endl;
 }
 return 0;
}

