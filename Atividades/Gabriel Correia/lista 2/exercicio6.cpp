//6. Fa�a um programa que receba dois n�meros e execute uma das opera��es listadas a seguir, de acordo com a
//escolha do usu�rio. Se for digitada uma op��o inv�lida, mostre mensagem de erro e termine a execu��o do
//programa. As op��es s�o:
//a) O primeiro n�mero elevado ao segundo n�mero.
//b) Raiz quadrada de cada um dos n�meros.
//c) Raiz c�bica de cada um dos n�meros.
//**********************************************************
//- Autor: Gabriel Correia Soares
//- Descri��o: Lista 2 - Exerc�cio 5
//**********************************************************/

#include <iostream>
#include <locale.h>
#include <cstdlib>
#include <cmath>
using namespace std;

int main()
{
    float inumero1 = 0;
    float inumero2 = 0;
    int inumero3 = 0;

    setlocale(LC_ALL,"");
    system("color 7E");

    cout << "primeiro numero: ";
    cin  >> inumero1;
    cout << endl;
    cout << "segundo numero: ";
    cin  >> inumero2;
    cout << endl;
    cout << "insira o que voce deseja fazer com estes numeros: "<<endl<<"1-o primeiro numero elevado pelo segundo;    "<<"2-raiz quadrada de ambos os numeros digitados;"<<endl<<"3-raiz cubica de ambos os numeros digitados;      "<<endl<<"campo de resposta: ";
    cin  >> inumero3;
    cout << endl;

    if (inumero3>=1&&inumero3<4)
        {if (inumero3==1)
               {cout<<"primeiro numero elevado pelo segundo:"<<pow(inumero1,inumero2);}}
        if  (inumero3==2)
           {if (inumero1>0 && inumero2>0)
             {cout<<"a raiz de "<<inumero1<<" e: "<<sqrt(inumero1)<<";"<<endl<<"a raiz de "<<inumero2<<" e: "<<sqrt(inumero2)<<";";}
        else  { cout<<"nao foi possivel realizar esta operacao" ;}}
        if  (inumero3==3)
             {cout<<"a raiz de "<<inumero1<<" e: "<<cbrt(inumero1)<<";"<<endl<<"a raiz de "<<inumero2<<" e: "<<cbrt(inumero2)<<";";}

    if (inumero3<1)
        cout<<"operacao innvalida";
    if (inumero3>3)
        cout<<"operacao innvalida";

}
