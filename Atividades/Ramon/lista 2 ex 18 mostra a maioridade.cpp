/**********************************************************
- Autor:     ramon
- Descri��o: 18. Fa�a um programa que receba a idade de uma pessoa e mostre a mensagem de maioridade ou n�o
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    //Declara��o de vari�veis

float  fidad = 0;

    //Configura��o da tela de sa�da
    setlocale(LC_ALL,"");
    system("color F1");

    //C�digo do programa
cout  << "programa de maioridade "
      << endl;

      cout  << " digite sua idade: ";
      cin   >> fidad;

if (fidad <= 17)
{
    cout  << "s� pode beber leite :,(";
}
else
{
cout  << " ja pode beber ;) ";
}
    return 0;
}
