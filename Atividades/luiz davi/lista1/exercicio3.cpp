/**********************************************************
- Autor:     Luiz Davi
- Descri��o: Lista 1: exerc�cio 3
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    //Declara��o de vari�veis
    float fNumero1 = 0;
    float fNumero2 = 0;
    float fResultado = 0;
    //Configura��o da tela de sa�da
    setlocale(LC_ALL,"");
    system("color F1");

    //C�digo do programa
    cout << "Digite o primeiro n�mero: ";
    cin >> fNumero1;

    cout << "Digite o segundo n�mero: ";
    cin >> fNumero2;

    fResultado = fNumero1/fNumero2;

    cout << "O resultado da divis�o dos n�meros digitados �: " << fResultado;



    return 0;
}
