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
float fNota1 = 0;

float fNota2 = 0;

float fNota3 = 0;

float fNota4 = 0;

float fNotaFinal = 0;

    //Configura��o da tela de sa�da
    setlocale(LC_ALL,"");
    system("color F1");

    //C�digo do programa

cout << "Quanto voc� tirou na primeira prova? ";
cin  >> fNota1;

cout << "Segunda prova? ";
cin  >> fNota2;

cout << "Terceira prova? ";
cin  >> fNota3;

cout << "E na �ltima? ";
cin  >> fNota4;

fNotaFinal = (fNota1 + fNota2 + fNota3 + fNota4)/4;

cout << "A sua m�dia aritm�tica final � "
     << fNotaFinal
     << endl;

if (fNotaFinal > 7)
{
    cout << "Voc� est� aprovado!"
         << endl;
}

else if (fNotaFinal < 3)
{
    cout << "Quem � capaz de tirar esse tipo de nota? "
         << endl;
}
else
{
    cout << "Voc� est� reprovado. Ou vai pra recupera��o, eu n�o sei, sou s� um programa."
         << endl;
}
    return 0;
}
