/**********************************************************
- Autor:     ramon
- Descri��o: 4. Fa�a um programa que receba um n�mero, calcule e mostre a tabuada desse n�mero.
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    //Declara��o de vari�veis
    int i = 0;
    int inum1 = 0;
    //Configura��o da tela de sa�da
    setlocale(LC_ALL,"");
    system("color F1");

    //C�digo do programa

    cout << "digite o numero que quer saber a tabuada: ";
    cin  >> inum1;


while ( i < 11)
{
    cout << inum1 << " x " << i << " = " << inum1 * i << endl;
    i = i + 1;

  }


    return 0;
}
