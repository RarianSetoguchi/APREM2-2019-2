/**********************************************************
- Autor:     Luiz Davi
- Descri��o: Recebe tr�s n�meros e faz a multiplica��o entre eles
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
    int iNumero3 = 0;

    //Configura��o da tela de sa�da
    setlocale(LC_ALL,"");
    system("color F1");

    //C�digo do programa
    cout << "digite tres n�meros: ";

    cin >> iNumero1;
    cin >> iNumero2;
    cin >> iNumero3;

    cout << "A multiplica��o desses numeros � : ";
    cout << iNumero1 * iNumero2 * iNumero3;

    return 0;
}
