/**********************************************************
- Autor:AUGUSTO
- Descri��o:divis�o
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    //Declara��o de vari�veis
float FValor1=0;
float FValor2=0;


    //Configura��o da tela de sa�da
    setlocale(LC_ALL,"");
    system("color F1");

    //C�digo do programa
cout<< "digite o primero numero";
cin>>FValor1;
cout<< "digite o segundo numero";
cin>>FValor2;
cout<<FValor1/FValor2;




}
