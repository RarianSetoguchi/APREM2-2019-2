/**********************************************************
- Autor:     Thomas Nicolas
- Descri��o:    lista 1 ex 6
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    //Declara��o de vari�veis
float fsalario = 0;
float fvendas = 0;
float fcomissao = 0;

    //Configura��o da tela de sa�da
    setlocale(LC_ALL,"");
    system("color F1");

    //C�digo do programa

    cout    << "insira o seu salario: ";
    cin     >> fsalario;

    cout    << "insira o valor das suas vendas: ";
    cin     >> fvendas;

    fcomissao = fvendas*4/100;

    cout    << "o valor da sua comiss�o �: " << fcomissao <<endl;

    cout    << "seu salario desse m�s �: " << fcomissao+fsalario;

    return 0;
}
