/**********************************************************
- Autor:     Thomas Nicolas
- Descri��o: Fa�a um programa que calcule e mostre a tabuada de um n�mero digitado pelo usu�rio.
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    //Declara��o de vari�veis

    float fmultiplicador = 0;

    //Configura��o da tela de sa�da
    setlocale(LC_ALL,"");
    system("color F1");

    //C�digo do programa

    cout    <<"Digite um n�mero:" ;
    cin     >>fmultiplicador;

    cout    << fmultiplicador <<" x 0 = " << fmultiplicador*0 <<endl;
    cout    << fmultiplicador <<" x 1 = " << fmultiplicador*1 <<endl;
    cout    << fmultiplicador <<" x 2 = " << fmultiplicador*2 <<endl;
    cout    << fmultiplicador <<" x 3 = " << fmultiplicador*3 <<endl;
    cout    << fmultiplicador <<" x 4 = " << fmultiplicador*4 <<endl;
    cout    << fmultiplicador <<" x 5 = " << fmultiplicador*5 <<endl;
    cout    << fmultiplicador <<" x 6 = " << fmultiplicador*6 <<endl;
    cout    << fmultiplicador <<" x 7 = " << fmultiplicador*7 <<endl;
    cout    << fmultiplicador <<" x 8 = " << fmultiplicador*8 <<endl;
    cout    << fmultiplicador <<" x 9 = " << fmultiplicador*9 <<endl;
    cout    << fmultiplicador <<" x 10 = " << fmultiplicador*10 <<endl;
    return 0;
}
