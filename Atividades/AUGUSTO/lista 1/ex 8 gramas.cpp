/**********************************************************
- Autor:AUGUSTO
- Descri��o:peso
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
cout<< "digite seu peso em Kg";
cin>>FValor1;
cout<< "seu peso em g � de ";
cout<<FValor1*1000<<"g";


}
