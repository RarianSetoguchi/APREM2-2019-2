/**********************************************************
- Autor:     thomas
- Descri��o: multiplica��o de v�riaveis
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    //Declara��o de vari�veis
int ivalor1=0;
int ivalor2=0;
int ivalor3=0;

    //Configura��o da tela de sa�da
    setlocale(LC_ALL,"");
    system("color F1");

    //C�digo do programa

cout    << "Insira o valor 1: ";
cin     >>ivalor1;
cout    << "Insira o valor 2: ";
cin     >>ivalor2;
cout    <<"Insira o valor 3: ";
cin     >>ivalor3;

cout    << "resultado da multiplica��o :"
        << ivalor1*ivalor2*ivalor3;

    return 0;
}
