/**********************************************************
- Autor:     Renan Salvazzini Coelho
- Descri��o: Lista 2 - Proposto 9
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    //Declara��o de vari�veis
    float fsaldo = 0;

    //Configura��o da tela de sa�da
    setlocale(LC_ALL,"");
    system("color F1");

    //Código do programa
    cout << "Digite seu saldo m�dio do �ltimo ano: ";
    cin >> fsaldo;

    cout << "Seu saldo m�dio foi de: "
         << fsaldo
         << " reais .   " ;

    if (fsaldo < 201)
    {
        cout << "Voc� ter� um cr�dito de 10 porcento, sendo esse  "
            << fsaldo * 0.1
            << " reais "
        << endl;
    }
    else if (fsaldo < 301)
    {
        cout << "Voc� ter� um cr�dito de 20 porcento, sendo esse  "
            << fsaldo * 0.2
            << " reais "
        << endl;
    }
    else if (fsaldo < 401)
    {
        cout << "Voc� ter� um cr�dito de 25 porcento, sendo esse  "
            << fsaldo * 0.25
            << " reais "
        << endl;
    }
    else
    {
       cout << "Voc� ter� um cr�dito de 30, sendo esse "
           << fsaldo * 0.30
           << " reais "
       << endl;
    }
    return 0;
}



