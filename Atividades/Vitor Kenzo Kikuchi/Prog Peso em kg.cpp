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
float fPeso=0;

    //Configura��o da tela de sa�da
    setlocale(LC_ALL,"");
    system("color F1");

    //C�digo do programa
cout << "Qual � seu peso em quilogramas ? ";
cin >> fPeso;

cout << "Seu peso em gramas � "
     << fPeso*1000
     << "g"
     << endl;

    return 0;
}
