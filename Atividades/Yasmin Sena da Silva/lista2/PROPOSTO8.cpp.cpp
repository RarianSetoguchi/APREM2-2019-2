/**********************************************************
- Autor:     Yasmin Sena
- Descri��o: Aumento salarial
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    //Declara��o de vari�veis
    float fsalario = 0;
    float faumento35 = 0;
    float faumento15 = 0;
    //Configura��o da tela de sa�da
    setlocale(LC_ALL,"");
    system("color F1");

    //C�digo do programa
    cout << "Digite o seu sal�rio: ";
    cin >> fsalario;

    faumento35 = fsalario * 1.35;
    faumento15 = fsalario * 1.15;

    if (fsalario < 301)
    {
        cout << "Seu sal�rio receber� um aumento de 35%, sendo a partir de agora "
        << faumento35
        <<" reais."
        << endl;
    }

    else
    {
        cout << "Seu sal�rio receber� um aumento de 15%, sendo a partir de agora "
        << faumento15
        <<" reais."
        << endl;
    }

    return 0;
}
