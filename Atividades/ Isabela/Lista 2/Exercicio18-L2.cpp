/**********************************************************
- Autor: Isabela Aparecida de Souza
- Descri��o: Maior idade EX18
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
    system("color F6");

    //C�digo do programa
    cout << "Digite sua idade: ";
    cin >> iIdade;

    cout << "Voc� tem " << iIdade
         << " anos de idade." << endl;

    if (iIdade < 18)
        cout << "Voc� � menor de idade!" << endl;

    else if (iIdade > 18)
        cout << "Voc� � maior de idade!" << endl;
    }
