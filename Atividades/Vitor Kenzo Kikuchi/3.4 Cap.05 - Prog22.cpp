/**********************************************************
- Autor:     Vitor Kenzo Kikuchi
- Descri��o: Exerc�cio 25 - Este programa calcula o rendimento de v�rios investimentos
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

main()
{
    int iOpcao = 0;
    int i = 1;
    float fDin = 0;
    int iCodigo = 0;

    //Configura��o da tela de sa�da
    setlocale(LC_ALL,"");
    system("color F1");

    //C�digo do programa
while (i!=0)
{
system("cls");
cout << "\nAperte 0 para sair ou qualquer outro n�mero para continuar... ";
cin  >> i;

if (i==0)

{
return 0;
}

else if (i>0)
{
cout << "\n\n\n     Qual � seu c�digo? ";
cin  >> iCodigo;

cout << "\n\n     Qual � o valor que voc� deseja investir? ";
cin  >> fDin;

cout << "\n\nPara investir na poupan�a, digite 1.\n"
     << "\nPara investir na poupan�a Plus, digite 2.\n"
     << "\nPara investir em fundos de renda fixa, digite 3.\n\n\n                       ";
cin  >> iOpcao;
}

if (iOpcao == 1)
{
cout << "\n\nNa poupan�a, seu dinheiro rende 1.5% por m�s.\n\n"
     << "No final do primeiro m�s, voc� teria "
     << fDin * 1.5/100 + fDin
     << " reais.\n\n "
     << endl;
}
else if (iOpcao == 2)
{
cout << "\n\nNa poupan�a Plus, seu dinheiro rende 2% por m�s.\n\n"
     << "No final do primeiro m�s, voc� teria "
     << fDin * 2/100 + fDin
     << " reais.\n\n "
     << endl;
}
else
{
cout << "\n\nNa Renda Fixa, seu dinheiro rende 4% por m�s.\n\n"
     << "No final do primeiro m�s, voc� teria "
     << fDin * 4/100 + fDin
     << " reais.\n\n "
     << endl;
}

system("pause");
}


    return 0;
}
