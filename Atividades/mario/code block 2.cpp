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

float fnumero1=0;
float fnumero2=0;

    //Configura��o da tela de sa�da
    setlocale(LC_ALL,"");
    system("color b0");

    //C�digo do programa
cout << " digite o primeiro n�mero ";
cin >> fnumero1;
cout << " digite o segundo n�mero ";
cin >> fnumero2;




if ( fnumero1<fnumero2)
cout << fnumero1 << " � menor que " << fnumero2 <<endl;

else
cout << fnumero2 << " � menor que " << fnumero1 <<endl;



    return 0;
}
