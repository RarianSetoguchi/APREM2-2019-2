/**********************************************************
- Autor:     Seu nome
- Descri��o: Breve descri��o do programa
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>
#include <math.h>

using namespace std;

int main()
{
    //Declara��o de vari�veis
int iOpcao = 0;
int iNum1 = 0;
int iNum2 = 0;

    //Configura��o da tela de sa�da
    setlocale(LC_ALL,"");
    system("color F1");

    //C�digo do programa
    cout << "Digite o primeiro n�mero: ";
    cin  >> iNum1;
    cout << "\n";

    cout << "Digite o primeiro n�mero: ";
    cin  >> iNum2;
    cout << "\n";

    cout << "--------------------------------------------\n\n";
    cout << "  1 - Pot�ncia (primeiro pelo segundo)\n\n";
    cout << "  2 - Raiz quadrada de cada um dos n�meros\n\n";
    cout << "  3 - Raiz c�bica de cada um dos n�meros\n\n";
    cout << "--------------------------------------------\n\n";

    cout << "Op��o: ";
    cin >> iOpcao;

    if (iOpcao == 1)
    {
    cout << "\n"
         << iNum1
         << "^"
         << iNum2
         << " = "
         << pow(iNum1,iNum2)
         << endl;
    }
    else if (iOpcao == 2)
    {
    cout << "\n"
         << "Raiz quadrada de "
         << iNum1
         << " � igual a "
         << sqrt(iNum1)
         << "\n"
         << "E a raiz quadrada de "
         << iNum2
         << " � igual a "
         << sqrt (iNum2)
         << endl;
    }
    else if (iOpcao == 3)
    {
    cout << "\n"
         << "Raiz c�bica de "
         << iNum1
         << " � igual a "
         << cbrt (iNum1)
         << "\n"
         << "E a raiz c�bica de "
         << iNum2
         << " � igual a "
         << cbrt (iNum2)
         << endl;
    }
    else
    {
    cout << "\n"
         << "Op��o inv�lida!"
         << endl;
    }

    return 0;
}
