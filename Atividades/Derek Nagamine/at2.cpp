/**********************************************************

- Autor:     Derek Nagamine Cavallari

- Descri��o: Fa�a um programa que receba tr�s n�meros, calcule e mostre a multiplica��o desses n�meros.

**********************************************************/
#include <iostream>
#include <conio.h>
using namespace std;

int main()

{

// declarando as variaveis

int inum1, inum2, iprod;

cout << "Ola humano, escolha um numero." << endl;
cin >> inum1;
cout << "Escolha outro para que possamos calcular o produto" << endl;
cin >> inum2;
cout << "O resultado e: ";
iprod = inum1*inum2;
cout << "\n" << iprod;

}
