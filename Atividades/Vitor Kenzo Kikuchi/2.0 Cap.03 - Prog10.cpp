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
int iAngulo1 = 0;

int iAngulo2 = 0;

    //Configura��o da tela de sa�da
    setlocale(LC_ALL,"");
    system("color F1");

    //C�digo do programa
cout << "Qual � o valor do primeiro �ngulo? ";
cin >> iAngulo1;

cout << "Qual � o valor do segundo �ngulo? ";
cin >> iAngulo2;

cout << "O valor do terceiro �ngulo � "
     << 180-iAngulo1-iAngulo2
     << " graus."
     << endl;

    return 0;
}
