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
float fLado1= 0;

float fLado2 = 0;

    //Configura��o da tela de sa�da
    setlocale(LC_ALL,"");
    system("color F1");

    //C�digo do programa
cout << "Para saber a pot�ncia em Watts necess�ria no seu c�modo, digite a medida em metros de um dos lados: ";
cin >> fLado1;

cout << "Digite a medida do outro lado: ";
cin >> fLado2;

cout << "A pot�ncia necess�ria no seu c�modo � de "
     << (fLado1*fLado2)*18
     << "W."
     <<endl;
    return 0;
}
