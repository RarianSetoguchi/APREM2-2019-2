/**********************************************************

- Autor:     Derek Nagamine Cavallari

- Descri��o: Fa�a um programa que receba o pre�o de um produto, calcule e mostre o novo pre�o, sabendo-se
que este sofreu um desconto de 10%.
**********************************************************/

#include <iostream>
#include <conio.h>
using namespace std;

int main()

{
//declarando variaveis

float fpreco, fnovo, fcent;

cout << "Qual o valor do produto?" << endl;
cin >> fpreco;
cout << "Voce recebeu 10% de desconto, o valor a ser pago em reais e:" << endl;
fnovo = 0.9*fpreco;
cout << "\n" << fnovo << endl;
}
