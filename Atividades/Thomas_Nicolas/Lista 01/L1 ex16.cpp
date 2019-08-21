/**********************************************************
- Autor:     Thomas Nicolas
- Descri��o: Fa�a um programa que receba o valor dos catetos de um tri�ngulo, calcule e mostre o valor da hipotenusa.
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>
#include <math.h>

using namespace std;

int main()
{
    //Declara��o de vari�veis
float fcateto1 = 0;
float fcateto2 = 0;
float fhipotenusa = 0;

    //Configura��o da tela de sa�da
    setlocale(LC_ALL,"");
    system("color 9F");

    //C�digo do programa

    cout    << "insira o cateto1: ";
    cin     >> fcateto1;
    cout    << "insira o cateto2: ";
    cin     >> fcateto2;

    fhipotenusa = fcateto1*fcateto1+fcateto2*fcateto2;

    cout    << "o valor da hipotenusa: "<< sqrt(fhipotenusa)<<endl;
    return 0;
}
