#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    //Declara��o de vari�veis
  float fQuilo = 0;


    //Configura��o da tela de sa�da
    setlocale(LC_ALL,"");
    system("color F1");

    //C�digo do programa
   cout << "Digite a sua massa em quilos: ";
   cin >> fQuilo;

   cout << "A sua massa em gramas � de " << fQuilo*1000 << ".";



    return 0;
}
