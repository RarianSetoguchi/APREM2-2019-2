/**********************************************************
- Autor:     ramon
- Descri��o: calculo de 10% de desconto
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    //Declara��o de vari�veis

float  fpreconorm = 0;
float  fprecocomdesc = 0;
    //Configura��o da tela de sa�da
    setlocale(LC_ALL,"");
    system("color F1");

    //C�digo do programa
    cout << "pre�o sem desconto: ";
    cin  >> fpreconorm;

    fprecocomdesc = fpreconorm - fpreconorm * 10/100;

    cout << "preco com 10% de desconto: "
         << fprecocomdesc
         << endl;
    return 0;
}
