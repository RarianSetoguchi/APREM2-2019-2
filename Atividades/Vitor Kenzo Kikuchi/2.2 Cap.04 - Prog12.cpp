/**********************************************************
- Autor:     Vitor Kenzo Kikuchi
- Descri��o: Exerc�cio 15 - Este programa calcula seu saldo depois de pagar suas contas.
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    //Declara��o de vari�veis
float fNum1 = 0;

float fNum2 = 0;

float fNum3 = 0;

    //Configura��o da tela de sa�da
    setlocale(LC_ALL,"");
    system("color 5D");

    //C�digo do programa
cout << "Digite um n�mero qualquer: ";
cin  >> fNum1;

cout << "Digite o segundo n�mero: ";
cin  >> fNum2;

cout << "Digite o terceiro n�mero: ";
cin >> fNum3;

if (fNum1 > fNum2 && fNum2 > fNum3)
{
cout << fNum1
     << " � o maior n�mero!"
     << endl;
}
else if (fNum2 > fNum1 && fNum1 > fNum3)
{
cout << fNum2
     << " � o maior n�mero!"
     << endl;
}
else
{
cout << fNum3
     << " � o maior n�mero!"
     << endl;
}

 return 0;
}
