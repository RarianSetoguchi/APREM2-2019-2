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
float fraio=0;
float fvolumedaesfera=0;

    //Configura��o da tela de sa�da
    setlocale(LC_ALL,"");
    system("color 5D");

    //C�digo do programa

cout << "digite o valor do raio da esfera em metros ";
cin >> fraio;

fvolumedaesfera= (3*3.14*fraio*fraio*fraio)/4;

cout << "o volume da esfera � em metros cubicos " << fvolumedaesfera << endl;

    return 0;

}





