/**********************************************************
- Autor:     ramon
- Descri��o: 10 Fa�a um programa que receba o custo de f�brica de um carro e mostre o pre�o ao consumidor
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    //Declara��o de vari�veis

float  fcuscar = 0;

    //Configura��o da tela de sa�da
    setlocale(LC_ALL,"");
    system("color F1");

    //C�digo do programa
cout  << "calcula o valor final do carro"
      << endl;

cout  << "digite seu salario atual: ";
cin   >> fcuscar;

if (fcuscar <= 12000)
{

cout << "o pre�o final do carro foi de  "
         << fcuscar * 1.05 ;
}
else if (fcuscar > 12000 && fcuscar < 25000 )
{

cout << "o pre�o final do carro foi de  "
     << (fcuscar * 1.1 + fcuscar * 0.15) ;
}
else
{
    cout  << "o pre�o final do carro foi de  "
          << (fcuscar * 1.15 + fcuscar * 0.2) ;
}
    return 0;
}
