/**********************************************************
- Autor:     Renan Salvazzini Coelho
- Descri��o: Lista 2 - Proposto 7
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    //Declara��o de vari�veis
    float fsalario = 0;

    //Configura��o da tela de sa�da
    setlocale(LC_ALL,"");
    system("color F1");

    //C�digo do programa
    cout << "Digite seu sal�rio: ";
    cin >> fsalario;


    if   (fsalario < 500)
    {
        cout << "seu sal�rio aumentar� para  "
            << fsalario * 1.3
            << " reais."
             <<endl;
    }
    else
    {
       cout << "seu sal�rio n�o ter� aumento!"
            <<endl;
    }
    return 0;
}


