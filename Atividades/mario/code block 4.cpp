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

float fsalario=0;
float fsalarioreajustado=0;

    //Configura��o da tela de sa�da
    setlocale(LC_ALL,"");
    system("color b0");

    //C�digo do programa
cout << " digite o sal�rio do funcion�rio ";
cin >> fsalario;

fsalarioreajustado=fsalario*3/10;

if ( fsalario<500 )

cout << " o sal�rio real � " << fsalarioreajustado <<endl;

else
cout << " o funcion�rio n�o tem direito a receber o benef�cio " <<endl;





    return 0;
}
