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
float fcusto=0;

float fconv=0;

    //Configura��o da tela de sa�da
    setlocale(LC_ALL,"");
    system("color F1");

    //C�digo do programa
cout << "Qual � o pre�o total de seu evento? ";
cin >> fcusto;

cout << "Qual � o pre�o de cada convite? ";
cin >> fconv;

cout << "Voc� ter� que vender pelo menos "
     << fcusto/fconv
     << " convites para cobrir seus custos."
     << endl;

    return 0;

}
