#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    int iDinheiro = 0;

    setlocale (LC_ALL,"");
    system("COLOR F1");

    cout << "Quantos reais voc� pretende levar a sua viagem R$";
    cin  >> iDinheiro;

    cout << " Com a cota��o do d�lar em R$4.01, voc� ter� "
         << iDinheiro/4.01
         << " d�lares.";

    cout << " Com a cota��o do euro em R$4.45, voc� ter� "
         << iDinheiro/4.45
         << " euros.";

    cout << " Com a cota��o da libra estelina em R$4.86, voc� ter� "
         << iDinheiro/4.86
         << " libras esterlina.";

}
