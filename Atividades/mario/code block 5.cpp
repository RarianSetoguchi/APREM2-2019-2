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

float fsaldomedio=0;


    //Configura��o da tela de sa�da
    setlocale(LC_ALL,"");
    system("color b0");

    //C�digo do programa
cout << " insira o saldo m�dio do �ltimo ano ";
cin >> fsaldomedio;


if ( fsaldomedio>400)
cout << " Seu cr�dito ser� de " <<(fsaldomedio*3/10)+fsaldomedio <<endl;

else if ( 400>=fsaldomedio>=300)
cout << " Seu cr�dito ser� de " << (fsaldomedio*25/100)+fsaldomedio <<endl;

else if ( 300>=fsaldomedio>=200)
cout << " Seu cr�dio ser� de " << (fsaldomedio*20/100)+fsaldomedio <<endl;

else
cout << " Seu cr�dito ser� de " << (fsaldomedio*10/100)+ fsaldomedio <<endl;


    return 0;
}
