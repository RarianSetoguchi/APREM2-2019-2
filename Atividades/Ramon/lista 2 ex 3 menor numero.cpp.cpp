/**********************************************************
- Autor:     ramon
- Descri��o: Fa�a um programa que receba dois n�meros e mostre o menor
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    //Declara��o de vari�veis

float  fnum1 = 0;
float  fnum2 = 0;

    //Configura��o da tela de sa�da
    setlocale(LC_ALL,"");
    system("color F1");

    //C�digo do programa
cout  << "mostra o numero menor."
      << endl;

cout  << "digite o primeiro numero: ";
cin   >> fnum1;

cout  << "digite o segundo numero: ";
cin   >> fnum2;

if (fnum1 < fnum2 )
{
    cout  << "o numero menor �:"
          << fnum1;
}

else if (fnum1 > fnum2)
{
    cout << "o numero menor �: "
         << fnum2;
}

    return 0;
}
