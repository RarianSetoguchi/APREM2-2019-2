/**********************************************************
- Autor:     Seu nome
- Descri��o: Breve descri��o do programa
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    //Declara��o de vari�veis

    int i = 0;
    int i1 = 0;
    int i2 = 0;

    //Configura��o da tela de sa�da
    setlocale(LC_ALL,"");
    system("color F1");

    //C�digo do programa

    while (i < 10)
    {
        i++;
        while (i1 < 11)
        {
            cout << "  " << i << " X " << i1 << " = " << i*i1 << "\n";
            i1++;
        }
        cout << "\n\n";
        i1 = 0;
    }

    return 0;
}
