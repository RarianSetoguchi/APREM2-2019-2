;/**********************************************************
- Autor:     ramon macedo
- Descri��o:. Fa�a um programa que calcule e mostre a �rea de um trap�zio.
Sabe-se que: A = ((base maior + base menor) * altura)/2
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    //Declara��o de vari�veis
float  fbasmaio = 0;
float  fbasmen = 0;
float  fhalt   = 0;
float  farea   = 0;
    //C�digo do programa

cout  << "calculo do trap�zio: "
      << endl;

cout  << "digite a base maior: ";
cin   >> fbasmaio;

cout  << "digite a base menor: ";
cin   >> fbasmen;

cout  << "digite a haltura: ";
cin   >> fhalt;


farea = (fbasmaio + fbasmen)* fhalt/ 2;



cout << "area do trap�zio: "
     << farea
     << endl;



      return 0;
}
