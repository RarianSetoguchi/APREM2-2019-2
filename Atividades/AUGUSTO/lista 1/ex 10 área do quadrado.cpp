/**********************************************************
- Autor:AUGUSTO
- Descri��o:�rea
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    //Declara��o de vari�veis
int iValor1=0;


    //Configura��o da tela de sa�da
    setlocale(LC_ALL,"");
    system("color F1");

    //C�digo do programa
cout<< "digite o tamanho do lado do quadrado ";
cin>>iValor1;
cout<<"sua �rea � de" ;
cout<<iValor1*iValor1<< "Ua" ;
}
