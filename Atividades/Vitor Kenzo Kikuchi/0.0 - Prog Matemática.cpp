/**********************************************************
- Autor:     Seu nome
- Descri��o: Breve descri��o do programa
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>
#include <cmath> // comandos pow, sqrt, cbrt, etc

using namespace std;

int main()
{
    //Declara��o de vari�veis
    float fBase = 0;
    float fExpoente = 0;
    float fResul = 0;

    //Configura��o da tela de sa�da
    setlocale(LC_ALL,"");
    system("color F1");

    //C�digo do programa
    cout << "Digite o primeiro n�mero (Base): ";
    cin  >> fBase;

    cout << "Digite o segundo n�mero (Expoente): ";
    cin  >> fExpoente;

    fResul = pow(fBase, fExpoente);

    cout << "\n\nPot�ncia: "
         << fResul
         << "\n"
         << endl;

    cout << "Raiz quadrada: "
         << sqrt(fResul)
         << "\n"
         << endl;

    cout << "Raiz c�bica: "
         << cbrt(fResul)
         << endl;

    return 0;
}
