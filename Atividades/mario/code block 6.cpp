/**********************************************************
- Autor:     Seu nome
- Descri��o: Breve descri��o do programa
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    //Declara��o de vari�veis

float fidade=0;


    //Configura��o da tela de sa�da
    setlocale(LC_ALL,"");
    system("color b0");

    //C�digo do programa
cout << " Digite sua idade ";
cin >> fidade;

if ( fidade>=18)
cout << " Voc� � maior de idade " << fidade << endl;

else
cout << " Voc� n�o � maior de idade " << fidade << endl;


    return 0;
}
