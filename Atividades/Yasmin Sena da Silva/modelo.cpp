/**********************************************************
- Autor:     Yasmin Sena
- Descri��o: subitra��o
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    //Declara��o de vari�veis
int iMinfinal = 60;
int iMinatual = 0;

    //Configura��o da tela de sa�da
    setlocale(LC_ALL,"");
    system("color F1");

    //C�digo do programa
cout << "digite o minuto atual ";
cin  >> iMinatual;

cout << "faltam "
     << iMinfinal - iMinatual
     << " minutos para as quatro horas da tarde. Isso � tudo pessoals2";
    return 0;
}
