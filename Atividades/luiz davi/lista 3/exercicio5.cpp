/**********************************************************
- Autor:     Luiz davi
- Descri��o: Lista 3: Exerc�cio 5
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    //Declara��o de vari�veis

      int i = 0;
    float fIdade = 0;
    float fMedia = 0;
    int iSoma = 0;

    //Configura��o da tela de sa�da
    setlocale(LC_ALL,"");
    system("color F1");

    //C�digo do programa
    while (i < 6)
    //while (iSoma != 0)
    {
        cout << "Digite a " << i + 1 << "� idade: ";
        cin >> fIdade;

        iSoma = iSoma+fIdade;

        i = i + 1;
    }

    fMedia = iSoma/i;

    cout << "A m�dia das idades �: " << fMedia;

    return 0;
}





