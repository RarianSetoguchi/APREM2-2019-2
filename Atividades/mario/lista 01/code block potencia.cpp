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
float fcomodo1=0;
float fcomodo2=0;
float fareatotal=0;
float fconsumo=0;
    //Configura��o da tela de sa�da
    setlocale(LC_ALL,"");
    system("color F1");

    //C�digo do programa

cout << " informe a �rea do comodo 1";
cin >> fcomodo1;
cout << " informe a �rea do comodo 2 ";
cin >> fcomodo2;

fareatotal=fcomodo1*fcomodo2;

fconsumo=fareatotal*18;

cout << "o consumo total em W ser� de " << fconsumo << endl;


    return 0;
}
