/**********************************************************
- Autor:     Luiz Davi
- Descri��o: Lista 1: exerc�cio 10
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    //Declara��o de vari�veis
    float  flado = 0;
    float  farea = 0;


    //C�digo do programa


    cout  << "Digite o lado do quadrado: ";
    cin   >> flado;


    farea = (flado * flado);



    cout << "A area do quadrado �: "
     << farea
     << endl;


    //Configura��o da tela de sa�da
    setlocale(LC_ALL,"");
    system("color F1");

    //C�digo do programa



    return 0;
}
