;/**********************************************************
- Autor:     ramon macedo
- Descri��o: Um funcion�rio recebe um sal�rio fixo mais 4% de comiss�o sobre as vendas. Fa�a um programa
que receba o sal�rio fixo do funcion�rio e o valor de suas vendas, calcule e mostre a comiss�o e seu
sal�rio final.
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    //Declara��o de vari�veis
float  fsalarfixo = 0;
float  fvendas = 0;
float  fcomissao = 0;
    //Configura��o da tela de sa�da
    setlocale(LC_ALL,"");
    system("color F1");

    //C�digo do programa

cout << "digite seu salario: ";
cin  >> fsalarfixo;

cout  << "digite o valor de suas vendas: ";
cin   >> fvendas;

fcomissao = fvendas * 4/100;


cout  << "sua comiss�o sobre as vendas: "
      << fcomissao
      << endl;

cout  << "seu salario final foi de: "
      << fsalarfixo + fcomissao
      << endl;

      return 0;
}
