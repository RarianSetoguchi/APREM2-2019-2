/**********************************************************
- Autor:     Luiz davi
- Descri��o: � um prgrama que calcula o seu peso em gramas.
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    //Declara��o de vari�veis
    float fPeso = 0;

    //Configura��o da tela de sa�da
    setlocale(LC_ALL,"");
    system("color F1");

    //C�digo do programa
    cout << "qual � seu peso em kg? ";
    cin >> fPeso;

    cout << "o seu peso em gramas �: ";
    cout << fPeso * 1000;


    return 0;
}
