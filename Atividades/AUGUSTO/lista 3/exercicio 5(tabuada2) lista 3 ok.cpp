/**********************************************************
- Autor:Augusto Nogueira Almeida
- Descri��o: Tabuada
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    //Declara��o de vari�veis
    int i = 0;
    int i2 =1;

    //Configura��o da tela de sa�da
    setlocale(LC_ALL,"");
    system("color F1");

    //C�digo do programa


while(i2<=9)
{
   while(i<=9)
   {
       i++;


       cout<< i2 <<"x"<< i<< "="<< (i*i2) <<endl;


   }

      cout<<endl<<endl;

      i2++;


    }





    return 0;

}

