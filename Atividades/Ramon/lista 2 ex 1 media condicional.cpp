/**********************************************************
- Autor:     Ramon
- Descri��o: 1. Fa�a um programa que receba quatro notas de um aluno, calcule e mostre a m�dia aritm�tica das notas e a
mensagem de aprovado ou reprovado, considerando para aprova��o m�dia 7.
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    //Declara��o de vari�veis

float   fnot1 = 0;

float   fnot2 = 0;

float   fnot3 = 0;

float   fnot4 = 0;

float   fmed  = 0;
    //Configura��o da tela de sa�da
    setlocale(LC_ALL,"");
    system("color F1");

    //C�digo do programa
    cout << "calcular media final "

cout  << "digite a primeira nota: ";
cin    >> fnot1;

cout  << "digite a segunda nota: ";
cin    >> fnot2;

cout  << "digite a terceira nota: ";
cin    >> fnot3;

cout  << "digite a quarta nota: ";
cin    >> fnot4;

fmed = (fnot1 + fnot2 + fnot3 + fnot4)/4;

if (fmed >= 7)
 {
     cout << "parabens passou raspando: "
     << fmed
     <<  endl;
 }
else
{
    cout << "boa sorte na sua dp, reprovado "
    << fmed
    << endl;
}

    return 0;
}
