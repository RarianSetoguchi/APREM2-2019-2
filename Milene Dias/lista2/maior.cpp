/**********************************************************
- Autor:     Milene Caroline Dias
- Descri��o: Maior numero2
**********************************************************/

#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    //Declara��o de vari�veis
    int inumero1=0;
    int inumero2=0;
    int inumero3=0;


    //Configura��o da tela de sa�da
    setlocale(LC_ALL,"");
    system("color F5");

    cout << " Digite o primeiro numero: ";
    cin >> inumero1;

    cout << " Digite um segundo numero: ";
    cin >> inumero2;

    cout << " Digite um terceiro numero: ";
    cin >> inumero3;


    if (inumero1>inumero2&& inumero1>inumero3)
    {
        cout<<" numero "<< inumero1 <<" � maior que o " <<inumero2<<" e "<<inumero3;
    }

     if (inumero2>inumero1 && inumero2>inumero3)
    {
        cout<<" numero "<< inumero2 <<" � maior que o " <<inumero1<<" e "<<inumero3;
    }

     if (inumero3>inumero1&& inumero3>inumero2)
    {
        cout<<" numero "<< inumero3 <<" � maior que o " <<inumero2<<" e "<<inumero1;
    }
    }
