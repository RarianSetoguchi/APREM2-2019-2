/**********************************************************
- Autor:     M�rio Neto
- Descri��o: multiplica��o de 3 vari�veis
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    //Declara��o de vari�veis

int inumber1=0;
int inumber2=0;
int idivision=0;

    //Configura��o da tela de sa�da
    setlocale(LC_ALL,"");
    system("color F1");

    //C�digo do programa

cout << "choose the first number ";
cin >> inumber1;
cout << " choose the second number ";
cin >> inumber2;
idivision = inumber1/inumber2;
cout << " the result is " << idivision;

    return 0;

}
