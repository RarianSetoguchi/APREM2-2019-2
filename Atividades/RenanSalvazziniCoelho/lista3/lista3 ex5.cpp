/**********************************************************
- Autor:     Renan Salvazzini Coelho
- Descri��o: Lista 3 Exerc�cio 5
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
  int i1 = 0;



    //Configura��o da tela de sa�da
    setlocale(LC_ALL,"");
    system("color F1");

    //C�digo do programa
 while (i1 < 11)
        {
i=0;

    while (i < 11)
{

        cout << i0 ;
        cout<< "X";
        cout << i;
        cout <<"=" ;
        cout <<  i*i0 <<endl ;
        i++;

}
  i0++;
   i1++;
   cout << endl ;   }

}
