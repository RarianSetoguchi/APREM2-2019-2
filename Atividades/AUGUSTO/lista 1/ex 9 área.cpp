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
int iValor2=0;
int iValor3=0;

    //Configura��o da tela de sa�da
    setlocale(LC_ALL,"");
    system("color F1");

    //C�digo do programa
cout<< "digite a base maior ";
cin>>iValor1;
cout<< "digite a base menor ";
cin>>iValor2;
cout<< "digite a altura ";
cin>>iValor3;
cout<<"sua �rea � de";
cout<<(((iValor1+iValor2)*iValor3)/2);
}
