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
    int inumero1=0;
    int inumero2=0;
    int isubtracao=0;

    //Configura��o da tela de sa�da
    setlocale(LC_ALL,"");
    system("color F1");

    //C�digo do programa
cout << "escolha o primeiro numero";
cin >> inumero1;
cout << "escolha o segundo numero";
cin >> inumero2;
isubtracao = inumero1 - inumero2;
cout << "resultado " << isubtracao;


    return 0;
}
