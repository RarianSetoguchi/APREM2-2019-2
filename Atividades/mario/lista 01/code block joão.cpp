/**********************************************************
- Autor:     M�rio Neto
- Descri��o: salario de jo�o
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    //Declara��o de vari�veis

float fcelcius=0;
float ffah=0;


    //Configura��o da tela de sa�da
    setlocale(LC_ALL,"");
    system("color 0b");

    //C�digo do programa

cout << " digite a temperatura em graus celcius ";
cin >> fcelcius;
ffah= 180*(fcelcius+32)/100;
cout << " sua temperatura em Fahrenheit � " << ffah;



    return 0;
}
