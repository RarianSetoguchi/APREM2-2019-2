/**********************************************************
- Autor:     ramon oliveira macedo
- Descri��o: Programa para calcular prgresso de for�a.
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    //Declara��o de vari�veis
    int iPesoinicial = 0;
    int iPesoatual = 0;

    //Configura��o da tela de sa�da
    setlocale(LC_ALL,"");
    system("color F1");

    //C�digo do programa

    cout << "digite quanto peso esta levantando atualmente: ";
    cin >> iPesoatual;
    cout << "digite com quanto peso come�ou seu frango: ";
    cin >> iPesoinicial;
    cout << "resultado do seu esfor�o =" << iPesoatual - iPesoinicial;


    return 0;
}
