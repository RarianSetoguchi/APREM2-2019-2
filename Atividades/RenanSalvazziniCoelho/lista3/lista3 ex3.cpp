/**********************************************************
- Autor:     Renan Salvazzini Coelho
- Descri��o: Lista 3 Exerc�cio 3
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    //Declara��o de vari�veis
    int i = 0;
    int iidade = 0;
    int icontagem1 = 0;
    int icontagem2 = 0;
    int icontagem3 = 0;
    int icontagem4 = 0;
    int icontagem5 = 0;

    //Configura��o da tela de sa�da
    setlocale(LC_ALL,"");
    system("color F1");

    //C�digo do programa
    cout << "Informe a idade de 8 pessoas,consecutivamente:  " <<endl;

    while (i < 8)
    {
        cout << "Digite a " << i + 1 << "� idade: ";
        cin >> iidade;
        i=i + 1;

    if(iidade < 16)
    {
        icontagem1++;
    }
    else if(iidade< 31)
    {
       icontagem2++;
    }
    else if(iidade< 46)
    {
       icontagem3++;
    }
    else if(iidade< 61)
    {
       icontagem4++;
    }
    else
    {
       icontagem5++;
    }
    }
    cout << "Existem " << icontagem1 << " pessoas na 1� faixa est�ria." <<endl;
    cout << "Existem " << icontagem2 << " pessoas na 2� faixa est�ria." <<endl;
    cout << "Existem " << icontagem3 << " pessoas na 3� faixa est�ria." <<endl;
    cout << "Existem " << icontagem4 << " pessoas na 4� faixa est�ria." <<endl;
    cout << "Existem " << icontagem5 << " pessoas na 5� faixa est�ria." <<endl;
    cout << " A porcentagem de pessoas na primeira faixa et�ria � de: " <<endl;
    cout << "1� faixa et�ria: " << (icontagem1/8)*100 <<" porcento" <<endl;
    cout << " A porcentagem de pessoas na quinta faixa et�ria � de: " <<endl;
    cout << "5� faixa et�ria: " << (icontagem5/8)*100 <<" porcento" <<endl;

    return 0;
}


