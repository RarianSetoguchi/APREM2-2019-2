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
float fdin=0;

    //Configura��o da tela de sa�da
    setlocale(LC_ALL,"");
    system("color F1");

    //C�digo do programa
cout << "Quantos reais voc� pretende gastar no exterior? ";
cin >> fdin;

cout << "Com a cota��o do d�lar em R$4.00, voc� teria "
     << fdin/4
     << " d�lares."
     << endl;

cout << "Como o euro vale R$4.475, voc� teria "
     << fdin/4.475
     << " euros."
     << endl;

cout << "Quanto o d�lar canadense, que vale R$2.99, voc� teria "
     << fdin/2.99
     << " libras esterlinas."
     << endl;

cout << "Tenha uma �tima viagem! "
     << endl;

    return 0;

}
