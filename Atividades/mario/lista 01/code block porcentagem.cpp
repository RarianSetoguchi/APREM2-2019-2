/**********************************************************
- Autor:     M�rio Neto
- Descri��o: multiplica��o de 3 vari�veis
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    //Declara��o de vari�veis

int iprecodoproduto=0;
int imultiplicao=0;
    //Configura��o da tela de sa�da
    setlocale(LC_ALL,"");
    system("color F1");

    //C�digo do programa

cout << " pre�o original do produto ";
cin >> iprecodoproduto;
imultiplicao = iprecodoproduto*10/100;
cout << " o preco do produto �" <<iprecodoproduto-imultiplicao;


}
