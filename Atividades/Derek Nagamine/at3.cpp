/**********************************************************

- Autor:     Derek Nagamine Cavallari

- Descri��o: Fa�a um programa que receba dois n�meros, calcule e mostre a divis�o do primeiro n�mero pelo
segundo. Sabe-se que o segundo n�mero n�o pode ser zero, portanto, n�o � necess�rio se preocupar
com valida��es.

**********************************************************/

#include <iostream>
#include <conio.h>
using namespace std;

int main()

{

// declarando variaveis

int inum1, inum2, iqo, ires;

cout << "Ola humano, escolha um numero." << endl;
cin >> inum1;
cout << "Escolha outro para calcularmos o quociente entre este numero e o primeiro." << endl;
cin >> inum2;
iqo = inum1/inum2;
cout << "O resultado e: " << "\n" << iqo << endl;
ires = inum1 - inum2*iqo;
cout << "O resto e: " << "\n" << ires;

}
