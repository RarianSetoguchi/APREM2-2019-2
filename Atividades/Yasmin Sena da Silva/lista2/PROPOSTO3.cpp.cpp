/**********************************************************
- Autor:     Yasmin Sena
- Descri��o: Menor N�mero
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    //Declara��o de vari�veis
    int inumero1 = 0;
    int inumero2 = 0;
    //Configura��o da tela de sa�da
    setlocale(LC_ALL,"");
    system("color F1");

    //C�digo do programa
    cout << "Digite um n�mero: ";
    cin >> inumero1;
    cout << "Digite outro n�mero: ";
    cin  >> inumero2;

    if (inumero1 <inumero2)
    {
        cout << "O menor n�mero �: "
        << inumero1
        << endl;
    }

    else
    {
       cout << "O menor n�mero �: "
        << inumero2
        << endl;
    }

    return 0;
}
