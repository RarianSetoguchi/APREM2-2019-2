;/**********************************************************
- Autor:     ramon macedo
- Descri��o:. Fa�a um programa que calcule e mostre a �rea de um quadrado. Sabe-se que: A = lado * lado.
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    //Declara��o de vari�veis
float  flado = 0;
float  farea = 0;
    //C�digo do programa

cout  << "calculo do quadrado: "
      << endl;

cout  << "digite o lado do quadrado: ";
cin   >> flado;


farea = (flado * flado);



cout << "area do quadrado: "
     << farea
     << endl;



      return 0;
}
