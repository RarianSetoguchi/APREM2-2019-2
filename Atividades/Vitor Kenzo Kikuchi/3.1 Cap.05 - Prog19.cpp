/**********************************************************
- Autor:     Vitor Kenzo Kikuchi
- Descri��o: Exerc�cio 02 - Este programa demonstra o lucro de um espet�culo de acordo com o n�mero de ingressos
  e o pre�o pelo qual eles ser�o vendidos.
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>
using namespace std;

main()
{
    int i = 0;
    float fPreco = 5.00;
    int iIngressos = 120;

    setlocale(LC_ALL,"");
    system("color F1");

    while (i < 9)
    {
        system("cls");
    cout << "\nCom o pre�o do ingresso em R$"
         << fPreco
         << ", \no total de ingressos que devem ser vendidos � de "
         << iIngressos
         << ". \nO lucro seria de R$"
         << ( fPreco * iIngressos ) - 200
         << ".\n\n"
         << endl;

         i += 1;
         fPreco -= 0.50;
         iIngressos += 26;

         system("pause");
    } // fim do la�o
} // fim do main
