/**********************************************************

- Autor:     Derek Nagamine Cavallari

- Descri��o:Fa�a um programa que receba o peso de uma pessoa em quilos, calcule e mostre esse peso em gramas.
**********************************************************/

#include <iostream>
#include <conio.h>
using namespace std;

int main()

{
// declarando variaveis

float pesokg, pesog;

cout << "Digite seu peso em Kg" << endl;
cin >> pesokg;
pesog = 1000*pesokg;
cout << "Seu peso em gramas e: " << pesog << "g";

}
