/**********************************************************
- Autor:     Thomas Nicolas
- Descri��o: Lista 02 ex 03
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    //Declara��o de vari�veis

    float fnum1 = 0;
    float fnum2 = 0;

    //Configura��o da tela de sa�da
    setlocale(LC_ALL,"");
    system("color F1");

    //C�digo do programa

    cout    <<"insira um numero: ";
    cin     >> fnum1;

    cout    <<"insira outro numero: ";
    cin     >> fnum2;

    if (fnum1<fnum2)
    {
    cout    <<"o primeiro numero � o menor"<<endl;
    }
    else if (fnum2<fnum1)
    {
    cout    <<"o segundo numero � o menor"<<endl;
    }
    else
    {
    cout    <<"ambos s�o iguais"<<endl;
    }

    return 0;
}
