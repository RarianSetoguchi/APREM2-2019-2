/**********************************************************
- Autor:     Thomas Nicolas
- Descri��o: Lista 02 ex 18
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    //Declara��o de vari�veis

    float fidade = 0;

    //Configura��o da tela de sa�da
    setlocale(LC_ALL,"");
    system("color F1");

    //C�digo do programa
    cout << "Digite a idade: ";
    cin >> fidade;

    if (fidade < 18)
        cout   <<"N�o pode dirigir" <<endl;

    else
        cout   <<"Pode dirigir" <<endl;

    return 0;
}
