/**********************************************************
- Autor:     ramon
- Descri��o: Fa�a um programa que receba tr�s n�meros e mostre o maior
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
float  fnum3 = 0;
    //Configura��o da tela de sa�da
    setlocale(LC_ALL,"");
    system("color F1");

    //C�digo do programa
cout  << "mostra o numero mmaior."
      << endl;

cout  << "digite o primeiro numero: ";
cin   >> fnum1;

cout  << "digite o segundo numero: ";
cin   >> fnum2;

cout  << " digite o terceiro numero: ";
cin   >> fnum3;

if (fnum1 > fnum2 && fnum1 > fnum3 )
{
    cout  << "o numero mmaior �:"
          << fnum1;
}

else if (fnum1 < fnum2 && fnum2 > fnum3)
{
    cout << "o numero mmaior �: "
         << fnum2;
}

else if (fnum1 < fnum3 && fnum3> fnum2)
{
    cout << " o numero maior �: "
         << fnum3;
}
    return 0;
}
