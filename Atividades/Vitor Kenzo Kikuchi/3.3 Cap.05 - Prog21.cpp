/**********************************************************
- Autor:     Vitor Kenzo Kikuchi
- Descri��o: EX 10 - Este programa calcula a soma dos n�meros pares e primos fornecidos.
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    //Declara��o de vari�veis
int i = 1;
int iNumero = 0;
int iSomaPar = 0;
int iSomaPrimo = 0;

    //Configura��o da tela de sa�da
    setlocale(LC_ALL,"");
    system("color F1");

    //C�digo do programa
while (i<11)
{
    system("cls");
cout << "\n       Digite o "
     << i
     << "� n�mero: ";
cin  >> iNumero;

i += 1;

if (iNumero%2==0)
{
iSomaPar += iNumero;
}
if (!(iNumero%2==0) || iNumero == 2)
{
iSomaPrimo += iNumero;
}
}
cout << "\n\nA soma de n�meros pares � igual a "
     << iSomaPar
     << endl;

cout << "\n\nA soma de n�meros primos � igual a "
     << iSomaPrimo
     << endl;

    return 0;
}
