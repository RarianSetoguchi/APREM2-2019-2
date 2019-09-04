/**********************************************************
- Autor:     Vitor Kenzo Kikuchi
- Descri��o: Exerc�cio 17 - Programa que determina a porcentagem de pessoas assistindo a cada um dos 4 canais diferentes.
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>
#include <math.h>

using namespace std;

int main()
{
    int iCanal = 1;
    int iPessoas = 0;
    int iGlobo = 0;
    int iSBT = 0;
    int iRecord = 0;
    int iBand = 0;

    //Configura��o da tela de sa�da
    setlocale(LC_ALL,"");
    system("color F1");

    //C�digo do programa

    cout << " 1 = Globo\n\n"
         << " 2 = SBT\n\n"
         << " 3 = Record TV\n\n"
         << " 4 = BAND TV\n"
         << endl;

    system("pause");

    while (iCanal!=0)
    {
    system("cls");

    cout << "Digite o n�mero ZERO para encerrar a entrada de dados."
         << endl;

    cout << "\n\nQual Canal voc� est� assistindo? ";
    cin  >> iCanal;

    cout << "\nQuantas pessoas est�o assistindo? ";
    cin  >> iPessoas;

    if (iCanal == 1)
    {
    iGlobo += iPessoas;
    }
    else if (iCanal == 2)
    {
    iSBT += iPessoas;
    }
    else if (iCanal == 3)
    {
    iRecord += iPessoas;
    }
    else if (iCanal == 4)
    {
    iBand += iPessoas;
    }
    else if (iCanal > 4)
    {
    cout << "\n\nCanal inv�lido!\n" << endl;
    system("pause");
    }
    cout << "\n" << endl;
    }

    system("cls");

    cout << "\nA porcentagem de pessoas assistindo a Globo � de "
         << ((float)iGlobo/(iGlobo+iSBT+iBand+iRecord))*100
         << "%.\n"
         << endl;

    cout << "A porcentagem de pessoas assistindo a SBT � de "
         << ((float)iSBT/(iGlobo+iSBT+iBand+iRecord))*100
         << "%.\n"
         << endl;

    cout << "A porcentagem de pessoas assistindo a Record � de "
         << ((float)iRecord/(iGlobo+iSBT+iBand+iRecord))*100
         << "%.\n"
         << endl;

     cout << "A porcentagem de pessoas assistindo a Band � de "
         << ((float)iBand/(iGlobo+iSBT+iBand+iRecord))*100
         << "%.\n\n"
         << endl;

    return 0;
}
