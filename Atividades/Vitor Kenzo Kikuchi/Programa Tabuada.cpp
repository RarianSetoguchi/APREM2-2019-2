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
int inumber = 0;


    //Configura��o da tela de sa�da
    setlocale(LC_ALL,"");
    system("color F1");

    //C�digo do programa
cout << "Digite o n�mero que voc� deseja saber a tabuada: ";
cin >> inumber;

cout << inumber
     << "x1="
     << inumber*1
     << endl;

cout << inumber
     << "x2="
     << inumber*2
     << endl;

cout << inumber
     << "x3="
     << inumber*3
     << endl;

cout << inumber
     << "x4="
     << inumber*4
     << endl;

cout << inumber
     << "x5="
     << inumber*5
     << endl;

cout << inumber
     << "x6="
     << inumber*6
     << endl;

cout << inumber
     << "x7="
     << inumber*7
     << endl;

cout << inumber
     << "x8="
     << inumber*8
     << endl;

cout << inumber
     << "x9="
     << inumber*9
     << endl;

cout << inumber
     << "x10="
     << inumber*10
     << endl;

    return 0;
}
