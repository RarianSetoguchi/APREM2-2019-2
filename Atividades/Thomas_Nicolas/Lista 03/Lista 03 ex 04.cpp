/**********************************************************
- Autor:     Thomas Nicolas
- Descri��o:
**********************************************************/

#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

main()
{
    //Declara��o das vari�veis

    int i = 0;
    float fvalor = 0;

    //Configura��o da tela de sa�da

    setlocale(LC_ALL,"");
    system("color F1");

    //c�digo do programa

    cout << "Digite um n�mero: ";
    cin >> fvalor;

    while (i<11)
    {
        cout << fvalor <<" X " << i <<" = " <<i*fvalor <<"\n";
        i++;
    }
}
