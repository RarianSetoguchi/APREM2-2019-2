/**********************************************************
- Autor:     Vitor Kenzo Kikuchi
- Descri��o: Exerc�cio 07 - Esse programa determina se voc� deve ganhar um aumento dependendo com o seu sal�rio.
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>
#include <math.h>

using namespace std;

int main()
{
    //Declara��o de vari�veis
float fSalario = 0;
    //Configura��o da tela de sa�da
    setlocale(LC_ALL,"");
    system("color F1");

    //C�digo do programa
cout << "Qual � o valor de seu sal�rio? R$";
cin  >> fSalario;

if (fSalario <= 500.00)
{
cout << "Voc� passar� a receber R$"
     << fSalario*30/100 + fSalario
     << ". Parab�ns!!"
     << endl;
}

else
{
cout << "De acordo com o seu sal�rio, voc� n�o tem direito a um aumento."
     << endl;
}

    return 0;
}
