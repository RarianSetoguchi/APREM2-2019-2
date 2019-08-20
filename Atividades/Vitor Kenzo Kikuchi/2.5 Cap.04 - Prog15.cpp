/**********************************************************
- Autor:     Vitor Kenzo Kikuchi
- Descri��o: Exerc�cio 10 - Esse programa calcula o pre�o do seu carro levando em conta os impostos e a taxa do distribuidor.
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    setlocale(LC_ALL,"");
    system("color 1F");

     //Declara��o de vari�veis
 float fCarro = 0;

    //Configura��o da tela de sa�da
    setlocale(LC_ALL,"");
    system("color 1F");

    //C�digo do programa
 cout << "Qual � o pre�o de f�brica do carro que voc� pretende comprar? ";
    cin  >> fCarro;

    if (fCarro < 12000)
    {
    cout << "Como voc� est� isento da porcentagem dos impostos, apenas a porcentagem do distribuidor � considerada. O pre�o final ser� de "
         << fCarro*5/100 +fCarro
         << " reais."
         << endl;
    }
    else if (fCarro > 11999 && fCarro < 25001)
    {
    cout << "Considerando a taxa do distribuidor e dos impostos, o pre�o final ser� de "
         << fCarro*10/100 + fCarro*15/100 + fCarro
         << " reais."
         << endl;
    }
    else
    {
    cout << "Levando em conta os impostos e a porcentagem do distribuidor, o pre�o final ser� de "
         << fCarro*15/100 + fCarro*20/100 + fCarro
         << " reais."
         << endl;
    }

    return 0;
}
