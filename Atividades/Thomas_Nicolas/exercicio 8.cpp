/**********************************************************
- Autor:     Thomas Nicolas
- Descri��o:
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    //Declara��o de vari�veis
float fpeso = 0;

    //Configura��o da tela de sa�da
    setlocale(LC_ALL,"");
    system("color F1");

    //C�digo do programa

    cout    << "insira seu peso em kilos: ";
    cin     >> fpeso;

    cout    << "seu peso em gramas: " <<fpeso*1000 <<"g";

    return 0;
}
