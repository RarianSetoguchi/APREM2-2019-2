/**********************************************************
- Autor:     Thomas Nicolas
- Descri��o: Fa�a um programa que receba o peso de uma pessoa, calcule e mostre:
a) o novo peso, se a pessoa engordar 15% sobre o peso digitado;
b) o novo peso, se a pessoa emagrecer 20% sobre o peso digitado.
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    //Declara��o de vari�veis

    float fpeso = 0;

    //Configura��o da tela de sa�da
    setlocale(LC_ALL,"");
    system("color F1");

    //C�digo do programa

    cout    <<"insira o seu peso atual: ";
    cin     >> fpeso;

    cout    <<"o seu peso se voc� engordar 15%: " <<fpeso+(fpeso*0,15)<<endl;

    cout    <<"o seu peso se voc� emagrecer 20%: " <<fpeso-(fpeso*0,20);


    return 0;
}
