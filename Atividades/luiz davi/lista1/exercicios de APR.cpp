/**********************************************************
- Autor:     Luiz Davi
- Descri��o: Recebe dois n�meros e faz a subtra��o entre eles
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    //Declara��o de vari�veis
    int iNumero1 = 0;
    int iNumero2 = 0;

    //Configura��o da tela de sa�da
    setlocale(LC_ALL,"");
    system("color F1");

    //C�digo do programa
    cout << "Digete dois n�mero:" << endl;
    cin >> iNumero1;
    cin >> iNumero2;

    cout << "A subtra��o entre os n�meros �:";
     cout << iNumero1 - iNumero2;


    return 0;
}
