/**********************************************************
- Autor:     Thomas Nicolas
- Descri��o: Fa�a um programa que receba dois n�meros, calcule e mostre a subtra��o do primeiro n�mero pelo
segundo.
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    //Declara��o de vari�veis

    int ivalor1 = 0;
    int ivalor2 = 0;

    //Configura��o da tela de sa�da
    setlocale(LC_ALL,"");
    system("color F1");

    //C�digo do programa

    cout   << "insira o primeiro valor: ";
    cin >> ivalor1;

    cout   << "insira o segundo valor: ";
    cin >> ivalor2;

    cout   <<"o valor da subtra��o �: " <<ivalor1-ivalor2;

    return 0;
}

