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
float fPreco = 0;
float fDesconto = 0;

    //Configura��o da tela de sa�da
    setlocale(LC_ALL,"");
    system("color F1");

    //C�digo do programa
cout << "Digite o pre�o do produto: ";
cin >> fPreco;

cout << "Digite o desconto: ";
cin >> fDesconto;

cout << "O valor do produto com desconto � de "
     << fPreco - fDesconto
     << " reais."
     << endl;


    return 0;
}
