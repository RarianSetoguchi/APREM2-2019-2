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

int isenha=0;


    //Configura��o da tela de sa�da
    setlocale(LC_ALL,"");
    system("color b0");

    //C�digo do programa
cout << " Digite uma senha de 4 n�meros ";
cin >> isenha;

if (isenha==4531)
cout << " Senha Correta " << isenha << endl;

 else
cout << " Senha inv�lida " << isenha << endl;


    return 0;
}
