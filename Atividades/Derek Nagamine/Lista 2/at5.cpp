/**********************************************************

- Autor:     Derek Nagamine Cavallari

- Descri��o:Fa�a um programa que receba dois n�meros e execute as opera��es listadas a seguir, de acordo com a escolha
do usu�rio.
1 M�dia entre os n�meros digitados
2 Diferen�a do maior pelo menor
3 Produto entre os n�meros digitados
4 Divis�o do primeiro pelo segundo
**********************************************************/

#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
float fnum1, fnum2, fmed, fdif, fpro, fquo;

cout << "Digite um numero qualquer e pressione enter." << endl;
cin >> fnum1;
cout << "Digite outro numero qualquer e pressione enter." << endl;
cin >> fnum2;
fmed = (fnum1+fnum2)/2;
fdif = fnum1-fnum2;
fpro = fnum1*fnum2;
fquo = fnum1/fnum2;
cout << "A media desses dois numeros e: " << fmed << endl;
cout << "A diferenca desses dois numeros e: " << fdif << endl;
cout << "O produto desses dois numeros e: " << fpro << endl;

if (fnum2==0)
{
    cout << "O quociente nao esta definido.";
}
else
{
     cout << "O quociente desses dois numeros e: " << fquo << endl;
}

}
