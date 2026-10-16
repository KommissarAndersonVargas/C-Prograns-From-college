#include <iostream>
#include <fstream>
using namespace std;

int main()
{

   ofstream arquivo;
   arquivo.open("Anderson.txt");
   arquivo << "Anderson\n";
   arquivo << "Larah \n";
   arquivo << "etern love";

   arquivo.close();



    return 0;
}
