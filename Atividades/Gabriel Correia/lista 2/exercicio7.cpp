//7. Uma empresa decide dar um aumento de 30% aos funcion�rios com sal�rios inferiores a R$ 500,00. Fa�a um
//programa que receba o sal�rio do funcion�rio e mostre o valor do sal�rio reajustado ou uma mensagem, caso
//ele n�o tenha direito ao aumento.
//**********************************************************
//- Autor: Gabriel Correia Soares
//- Descri��o: Lista 2 - Exerc�cio 5
//**********************************************************/

#include <iostream>
#include <locale.h>
#include <cstdlib>
#include <cmath>
using namespace std;

int main()
{
    float inumero1 = 0;

    setlocale(LC_ALL,"");
    system("color 7E");

    cout << "digite o seu salario: "<<"R$";
    cin  >> inumero1;
    cout << endl;

    if (inumero1<500.00&&inumero1>0)
        {cout<<"seu novo salario com o reajuste de 30% e de:"<<"R$"<<inumero1+(inumero1*30)/100;}
    if (inumero1>=500.00)
        {cout<<"sinto em dizer que voce nao tem direito a este reajuste de 30%";}

    if (inumero1<=0)
        {cout<<"operacao innvalida";}
}
