/**********************************************************
- Autor:     Renan Salvazzini Coelho
- Descri��o: Proposto 1
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    //Declara��o de vari�veis
    float fbasemaior = 0;
    float fbasemenor = 0;
    float faltura = 0;

    //Configura��o da tela de sa�da
    setlocale(LC_ALL,"");
    system("color F1");

    //C�digo do programa
    cout << " Digite o valor da base maior: ";
    cin >> fbasemaior;

    cout << " Digite o valor da base menor: ";
    cin >> fbasemenor;

    cout << " Digite o valor da altura: ";
    cin >> faltura;

    cout << " �rea do trap�zio �: "
          << ((fbasemaior + fbasemenor) * faltura) / 2
          << " Unidades de �rea."
          << endl;


    return 0;
}
