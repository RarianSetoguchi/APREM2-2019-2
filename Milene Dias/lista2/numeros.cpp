/**********************************************************
- Autor:     Milene Caroline Dias
- Descri��o: Maior numero
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


    //Configura��o da tela de sa�da
    setlocale(LC_ALL,"");
    system("color E1");

    cout << " Digite um numero: ";
    cin >> inumero1;

    cout << " Digite outro numero: ";
    cin >> inumero2;

    if (inumero1<inumero2)
    {
        cout<<" numero "<< inumero1 <<" � menor que o " <<inumero2;
    }

    if (inumero1>inumero2)
    {
        cout<<" numero "<< inumero2 <<" � menor que o " <<inumero1;
    }
    }
