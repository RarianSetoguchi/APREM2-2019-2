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
    int iIdade = 0;


    //Configura��o da tela de sa�da
    setlocale(LC_ALL,"");
    system("color F1");

    //C�digo do programa

    cout << "Digite a sua idade : ";
    cin >> iIdade;

    if (iIdade>=18)
    {
        cout << "Voce � maior de idade!";
    }

    else
    {
        cout << "Voce � menor de idade!";

    }





    return 0;
}
