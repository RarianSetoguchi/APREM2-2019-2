/**********************************************************
- Autor:     Vitor Kenzo Kikuchi
- Descri��o: Exerc�cio 04 - Programa que determina a tabuada de qualquer n�mero.
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>
#include <math.h>

using namespace std;

int main()
{
    int iNumero = 0;
    int i = 1;

    //Configura��o da tela de sa�da
    setlocale(LC_ALL,"");
    system("color F1");

    //C�digo do programa

    cout << "\n\n     Digite o n�mero: ";
    cin  >> iNumero;

    system("cls");

    cout <<"\n\n"
         << endl;

    while (i<11)
    {
    cout << "   " << iNumero << " x " << i << " = " << iNumero*i << endl;

    i += 1;
    }

    cout << "\n\n"
         << endl;

    return 0;
}
