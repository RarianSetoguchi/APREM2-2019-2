#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    //Declara��o de vari�veis
    float fN1 = 0;
    float fN2 = 0;
    int iP1 = 2;
    int iP2 = 3;
    int iDiv = 5;

    //Configura��o da tela de sa�da
    setlocale(LC_ALL,"");
    system("color F1");

    //C�digo do programa
    cout << "Digite a primeira nota de peso 2: ";
    cin >> fN1;
    cout << "Digite a segunda nota de peso 3: ";
    cin >> fN2;

    cout << "A m�diadas notas � de: "
         << ((fN1 * iP1) + (fN2 * iP2)) / iDiv
         << endl;


    return 0;
}
