
/**********************************************************
- Autor:     Thomas Nicolas
- Descri��o: Fa�a um programa que calcule e mostre a �rea de um trap�zio.
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    //Declara��o de vari�veis

    float fbasem = 0;
    float fbaseM = 0;
    float faltura = 0;

    //Configura��o da tela de sa�da
    setlocale(LC_ALL,"");
    system("color F1");

    //C�digo do programa

    cout    <<"insira a base menor do trap�sio: ";
    cin     >> fbasem;

    cout    <<"insira a base maior do trap�sio: ";
    cin     >> fbaseM;

    cout    <<"insira a altura do trap�sio: ";
    cin     >> faltura;

    cout    <<"a �rea do trap�sio �: " <<((fbaseM+fbasem)*faltura)/2;
    return 0;
}
