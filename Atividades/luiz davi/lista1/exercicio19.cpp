/**********************************************************
- Autor:     Luiz Davi
- Descri��o: � um programa que recebe duas dimenso�s de um c�mado , que calcula e mostra sua �rea metros ao quadrado.
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    //Declara��o de vari�veis
    float fLado1 = 0;
    float fLado2 = 0;

    //Configura��o da tela de sa�da
    setlocale(LC_ALL,"");
    system("color F1");

    //C�digo do programa
    cout << "Para saber a pot�ncia necess�ria em watts no seu c�mado, digite a medida em metros em um dos lados: ";
    cin >> fLado1;
    cout << "Digite a medida do outro lado: ";
    cin >> fLado2;

    cout << "A pot�ncia necess�ria  no seu cr�mado � de: ";
    cout << (fLado1*fLado2)*18;


    return 0;
}
