/**********************************************************
- Autor:     Yasmin Sena
- Descri��o: �rea de um trap�zio
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    //Declara��o de vari�veis
    float fBasemaior = 0;
    float fbasemenor = 0;
    float faltura = 0;
    //Configura��o da tela de sa�da
    setlocale(LC_ALL,"");
    system("color F1");

    //C�digo do programa
    cout << "Digite os valores referentes a: Base maior: ";
    cin >> fBasemaior;
    cout << "Base menor: ";
    cin >> fbasemenor;
    cout << "Altura: ";
    cin >> faltura;
    cout << "A �rea do trap�zio descrito � "
         << ((fBasemaior + fbasemenor) * faltura) / 2
         << " unidades de �rea."
         << endl;


    return 0;
}
