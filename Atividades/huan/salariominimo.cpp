#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    //Declara��o de vari�veis

    float fSalario1 = 0;
    float fSalario2 = 0;

    //Configura��o da tela de sa�da
    setlocale(LC_ALL,"");
    system("color F1");

    //C�digo do programa

    cout << " calcule quantos sal�rios m�nimos voc� ganha.\n";

    cout << "Digite  valor do sal�rio m�nimo:";
    cin >> fSalario1;

    cout << "Digite o valor do seu sal�rio: ";
    cin >> fSalario2;

    float fSalario3 = fSalario2/fSalario1;

    cout << "Voc� ganha " << fSalario3 << " sal�rio m�nimo.";

    return 0;
}
