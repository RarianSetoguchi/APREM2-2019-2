/**********************************************************
- Autor:AUGUSTO
- Descri��o:s�lario
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    //Declara��o de vari�veis
float FValor1=0;



    //Configura��o da tela de sa�da
    setlocale(LC_ALL,"");
    system("color F1");

    //C�digo do programa
cout<< "digite o salario ";
cin>>FValor1;
cout<< "com a bonifica��o seu salario � de ";
cout<<FValor1+((FValor1*4)/100);



}
