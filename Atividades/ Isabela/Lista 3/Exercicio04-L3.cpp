// **********************************************************
// Autor: Isabela Ap de Souza
// Descri��o: tabuada Ex04
//************************************************************
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    float fValor1 = 0;
    int i = 0;

    setlocale(LC_ALL,"");
    system("color F3");

    cout << "Digite um n�mero. " << endl;
    cin >> fValor1;
    cout << "A tabauda dele �: " << endl;

    while (i < 11)

 {
    cout << fValor1 << "X" << i <<" = " << fValor1 * i << endl;
    i++;
 }

   return 0;
}
