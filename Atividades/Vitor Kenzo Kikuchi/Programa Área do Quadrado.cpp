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
int iLado = 0;

    //Configura��o da tela de sa�da
    setlocale(LC_ALL,"");
    system("color F1");

    //C�digo do programa
cout << "Digite a medida do lado do quadrado: ";
cin >> iLado;

cout << "A �rea do quadrado � igual a "
     << iLado * iLado
     << endl;

    return 0;
}
