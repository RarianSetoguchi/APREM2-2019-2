/**********************************************************
- Autor:     Renan Salvazzini Coelho
- Descri��o: Proposto 1
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    //Declara��o de vari�veis
    float falturaatual = 0;
    float falturateto = 2.8;

    //Configura��o da tela de sa�da
    setlocale(LC_ALL,"");
    system("color F1");

    //C�digo do programa
    cout << "Digite sua altura: ";
    cin >> falturaatual;

    cout << " considere a altura do teto:2.8 ";


    cout << " sua altura menos a altura do teto � "
         << falturateto - falturaatual
         << " metros "

         << endl;
    return 0;
}
