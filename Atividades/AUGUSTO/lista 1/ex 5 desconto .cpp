/**********************************************************
- Autor:AUGUSTO
- Descri��o:desconto
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
cout<< "digite o pre�o";
cin>>FValor1;
cout<<"com desconto de 10% seu produto vai custar";
cout<<FValor1-((FValor1*10)/100);





}
