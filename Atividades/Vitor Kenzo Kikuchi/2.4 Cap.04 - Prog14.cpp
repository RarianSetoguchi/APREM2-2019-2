/**********************************************************
- Autor:     Vitor Kenzo Kikuchi
- Descri��o: Exerc�cio 19 - Este programa determina qual deve ser seu peso ideal.
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    //Declara��o de vari�veis
float fheight = 0;
float fgender = 0;
    //Configura��o da tela de sa�da
    setlocale(LC_ALL,"");
    system("color F0");

    //C�digo do programa
cout << "Qual � seu sexo? Digite 1 para masculino e 2 para feminino. ";
cin  >> fgender;

cout << "Qual � sua altura? ";
cin  >> fheight;

if (fgender == 1)
{
cout << "Seu peso ideal � de "
     << (72.7*fheight) - 58
     << " kg."
     << endl;
}
else
{
cout << "Seu peso ideal � de "
     << (62.1*fheight) - 44.7
     << " kg."
     << endl;
}
    return 0;
}
