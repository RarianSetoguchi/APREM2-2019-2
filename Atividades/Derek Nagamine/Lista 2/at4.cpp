/**********************************************************

- Autor:     Derek Nagamine Cavallari

- Descri��o:Fa�a um programa que receba tr�s n�meros e mostre o maior.
**********************************************************/

#include <iostream>
#include <conio.h>
using namespace std;

int main()
{

float num1, num2, num3;

cout << "Digite um numero qualquer e precione enter. Repita isso 2 vezes." << endl;
cin >> num1;
cin >> num2;
cin >> num3;
cout << "O maior dentre os digitos e: ";
if (num1>num2 && num2>num3)
{
        cout << num1;
}

    else if (num2>num1 && num2>num3)
    {
        cout << num2;
    }
else
{

    cout << num3;
}
}
