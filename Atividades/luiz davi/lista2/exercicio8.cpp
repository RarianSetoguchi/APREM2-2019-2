/**********************************************************
- Autor:     Luiz Davi
- Descri��o: lista 2: exercicio 8
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    //Declara��o de vari�veis
     float fS1 = 0;
     float fRes = 0;

    //Configura��o da tela de sa�da
    setlocale(LC_ALL,"");
    system("color F1");

    //C�digo do programa

    cout << "Digite o seu salario:";
    cin >> fS1;

    if ( fS1 <= 300)
    {

        fRes = ((fS1*35)/100)+fS1;
        cout << endl << "O seu salario teve um reajuste de 35% e foi par um valor de: " << fRes;

    }

    else
    {
    fRes = ((fS1*15)/100)+fS1;

    cout << endl << "O seu salario teve um reajuste de 15% e foi par um valor de: " << fRes;
    }





    return 0;
}
