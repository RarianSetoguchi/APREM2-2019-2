/**********************************************************
- Autor:     Yasmin Sena
- Descri��o: PROPOSTO 3
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    //Declara��o de vari�veis
    int i = 0;
    int idade = 0;
    int icount1 = 0;
    int icount2 = 0;
    int icount3 = 0;
    int icount4 = 0;
    int icount5 = 0;
    //Configura��o da tela de sa�da
    setlocale(LC_ALL,"");
    system("color F1");

    //C�digo do programa
    cout << "informe a idade de oito pessoas:  \n ";
    while (i < 8)
    {
        cout << "Digite a " << i + 1 << "� idade: ";
        cin >> idade;
        i = i + 1;

    if (idade<16)
    {
      icount1++;
    }
    else if (idade<31)
    {
        icount2++;
    }
    else if (idade<46)
    {
        icount3++;
    }
    else if (idade<61)
    {
        icount4++;
    }
    else
    {
        icount5++;
    }
    }
    cout << "Existem " << icount1 << " pessoas na 1� Faixa Et�ria. \n";
    cout << "Existem " << icount2 << " pessoas na 2� Faixa Et�ria. \n";
    cout << "Existem " << icount3 << " pessoas na 3� Faixa Et�ria. \n";
    cout << "Existem " << icount4 << " pessoas na 4� Faixa Et�ria. \n";
    cout << "Existem " << icount5 << " pessoas na 5� Faixa Et�ria. \n";
    cout << " Porcentagem de pessoas na primeira faixa et�ria: \n";
    cout << "1� Faixa et�ria: " << ((float)icount1/8)*100 << "% \n";
    cout << " Porcentagem de pessoas na �ltima faixa et�ria: \n";
    cout << "5� Faixa et�ria: " << ((float)icount5/8)*100 << "% \n";

    return 0;
}
