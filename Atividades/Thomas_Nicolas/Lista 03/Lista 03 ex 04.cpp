/**********************************************************
- Autor:
- Descri��o:
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    //Declara��o de vari�veis

    int i = 0;
    int inum = 0;

    //Configura��o da tela de sa�da
    setlocale(LC_ALL,"");
    system("color F1");

    //C�digo do programa

    cout    <<"Digite um n�mero:";
    cin     >>inum;

    while   (i<11)
    {
        cout <<inum <<" X " <<i <<" = " <<inum*i;
        cout << "\n";
            i+=1;
    }

    return 0;
}
