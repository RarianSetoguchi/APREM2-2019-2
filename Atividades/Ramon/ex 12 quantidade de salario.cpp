;/**********************************************************
- Autor:     ramon macedo
- Descri��o:. Fa�a um programa que receba o valor do sal�rio m�nimo e o valor do sal�rio de um funcion�rio, calcule
e mostre a quantidade de sal�rios m�nimos que esse funcion�rio ganha.
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    //Declara��o de vari�veis
float  fsalarmin = 0;
float  fsalariatu = 0;
float  fquantsal  = 0;
    //C�digo do programa

cout  << "calculo de quantos salarios vc ganha: "
      << endl;

cout  << "digite o salario que ganha: ";
cin   >> fsalariatu;

cout  << "digite o salario minimo atual: ";
cin   >> fsalarmin;

fquantsal = fsalariatu/ fsalarmin;


cout << "quantidade de salarios que ganha: "
     << fquantsal
     << endl;



      return 0;
}
