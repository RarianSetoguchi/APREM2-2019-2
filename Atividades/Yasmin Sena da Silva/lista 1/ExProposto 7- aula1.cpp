/**********************************************************
- Autor:     Yasmin Sena
- Descri��o: Emagrecer e engordar
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    //Declara��o de vari�veis
    float fpeso = 0;
    float femagrece = 0;
    float fengorda = 0;

    //Configura��o da tela de sa�da
    setlocale(LC_ALL,"");
    system("color F1");

    //C�digo do programa
    cout << "Digite seu peso em quilogramas: ";
    cin  >> fpeso;
    femagrece = 0.8 * fpeso;
    fengorda = 1.15 * fpeso;
    cout << "Caso emagre�a 20% do seu peso ficar� com "
         << femagrece
         << " kg, e se engordar 15%, estar� com: "
         << fengorda
         << "kg."
         << endl;


    return 0;
}
