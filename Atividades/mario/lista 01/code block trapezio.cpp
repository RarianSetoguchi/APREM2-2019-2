/**********************************************************
- Autor:     Mario Neto
- Descri��o: massa corporal.
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    //Declara��o de vari�vei
float fladoquadrado;

    //Configura��o da tela de sa�da
    setlocale(LC_ALL,"");
    system("color 5D");

    //C�digo do programa

cout << "digite o lado do quadrado em metros  ";
cin >> fladoquadrado;

fladoquadrado = fladoquadrado*fladoquadrado;

cout << " a area do quadrado � em metros quadrados  " << fladoquadrado << endl;


    return 0;

}





