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
cout<< "digite seu peso ";
cin>>FValor1;
cout<< "se voc� engordar 15% seu peso ser� de ";
cout<<FValor1+((FValor1*15)/100)<<"Kg";
cout<< "se voc� emagrecer 20% seu peso ser� de ";
cout<<FValor1-((FValor1*20)/100)<<"Kg";



}
