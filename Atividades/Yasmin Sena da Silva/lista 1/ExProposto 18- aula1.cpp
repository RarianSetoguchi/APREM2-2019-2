/**********************************************************
- Autor:     Yasmin Sena
- Descri��o: Convers�o de temperatura
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    //Declara��o de vari�veis
    float fcelsius = 0;
    float ffahrenheit = 0;

    //Configura��o da tela de sa�da
    setlocale(LC_ALL,"");
    system("color F1");

    //C�digo do programa
    cout << "Insira a temperatura em graus celsius: ";
    cin  >> fcelsius;

    ffahrenheit = (180*fcelsius + 3200) /100;

    cout << "A mesma temperatura corresponde a: "
         << ffahrenheit
         << " fahrenheit"
         << endl;

    return 0;
}
