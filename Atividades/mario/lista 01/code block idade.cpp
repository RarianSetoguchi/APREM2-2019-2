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

float fsalariodejoao=0;
float fsalarioliquidodejoao=0;

    //Configura��o da tela de sa�da
    setlocale(LC_ALL,"");
    system("color F1");

    //C�digo do programa

cout << " informe o sal�rio de Jo�o ";
cin >> fsalariodejoao;

fsalarioliquidodejoao=fsalariodejoao*1/50;

cout << " o sal�rio l�quido de Jo�o � " << fsalariodejoao-fsalarioliquidodejoao;




    return 0;
}
