/**********************************************************
- Autor:     Luiz davi
- Descri��o: � um programa que receba duas notas e calcula a media ponderada entre elas.
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    //Declara��o de vari�veis
    float fN1 = 0;
    float fN2 = 0;
    int iP1 = 2;
    int iP2 = 3;
    int iDiv = 5;

    //Configura��o da tela de sa�da
    setlocale(LC_ALL,"");
    system("color F1");

    //C�digo do programa
    cout << "Digite a primeira nota(peso 2): ";
    cin >> fN1;

    cout << "Digite a segunda nota(peso 3): ";
    cin >> fN2;

    cout << "A m�dia ponderada das notas � de: ";
    cout << (fN1*2+fN2*3)/5;

    return 0;
}
