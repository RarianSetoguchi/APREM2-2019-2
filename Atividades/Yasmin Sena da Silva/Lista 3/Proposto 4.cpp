/**********************************************************
- Autor:     Yasmin Sena
- Descri��o: tabuada simples
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    //Declara��o de vari�veis
    int i = 0;
    int ivalor = 0;
    int iresultado = 0;
    //Configura��o da tela de sa�da
    setlocale(LC_ALL,"");
    system("color F1");

    //C�digo do programa
    cout << "digite um valor: ";
    cin >> ivalor;

    while (i < 11)
    {

        iresultado = i * ivalor;

        cout << ivalor <<"x" << i << "=" << iresultado << endl;
         i++;

    }


    return 0;
}
