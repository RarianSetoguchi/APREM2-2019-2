/**********************************************************
- Autor:     Renan Salvazzini Coelho
- Descri��o: Lista 2 - Proposto 8
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


    if   (fsalario < 301)
    {
        cout << "seu sal�rio ser� reajustado para  "
            << fsalario * 1.35
            << " reais."
             <<endl;
    }
    else
    {
       cout << "seu sal�rio ser� reajustado para  "
            << fsalario * 1.15
            << " reais."
            <<endl;
    }
    return 0;
}

