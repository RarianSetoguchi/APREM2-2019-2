/**********************************************************
- Autor:     Renan Salvazzini Coelho
- Descri��o: Lista 3 Exerc�cio 4
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    //Declara��o de vari�veis
    int i = 0;
    int i0 = 0;

    //Configura��o da tela de sa�da
    setlocale(LC_ALL,"");
    system("color F1");

    cout << " digite um valor de entre 0 a 10 e saiba a tabuada:";
    cin >>  i0;

    //C�digo do programa
 while (i < 11)

{
        cout << i0 ;
        cout<< "X";
        cout << i;
        cout <<"=" ;
        cout <<  i*i0 <<endl ;
        i++;

}
}
