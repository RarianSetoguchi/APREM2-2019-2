/**********************************************************
- Autor:     Thomas Nicolas
- Descri��o: Lista 02 ex 04
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
    float fnum3 = 0;

    //Configura��o da tela de sa�da
    setlocale(LC_ALL,"");
    system("color F1");

    //C�digo do programa

    cout    <<"insira o primeiro numero: ";
    cin     >> fnum1;

    cout    <<"insira o segundo numero: ";
    cin     >> fnum2;

    cout    <<"insira o terceiro numero: ";
    cin     >> fnum3;

    if (fnum1>fnum2 && fnum1>fnum3)
    {
    cout    <<"o primeiro numero � o maior"<<endl;
    }
    else if(fnum2>fnum1 && fnum2>fnum3)
    {
    cout    <<"o segundo numero � o maior"<<endl;
    }
    else
    {
    cout    <<"o terceiro numero � o maior"<<endl;
    }
    return 0;
}
