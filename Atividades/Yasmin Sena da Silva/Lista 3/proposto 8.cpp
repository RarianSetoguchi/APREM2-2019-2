/**********************************************************
- Autor:     Yasmin Sena
- Descri��o: PROPOSTO 8
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>
#include <ctype.h>

using namespace std;

int main()
{
    //Declara��o de vari�veis
    int i = 0;
    int idade = 0;
    int ipeso = 0;
    float faltura = 0;
    char colhos;
    char cabelo;
    int icount1 = 0;
    int icount2 = 0;
    int icount3 = 0;
    int icount4 = 0;
    int inovaidade=0;
    float fmedia=0;
    //Configura��o da tela de sa�da
    setlocale(LC_ALL,"");
    system("color F1");

    //C�digo do programa
    cout << "informe a idade de seis pessoas:  \n ";
    while (i < 6)
    {
        cout << "Digite a " << i + 1 << "� idade: ";
        cin >> idade;
        cout << "seu peso em quilogramas: ";
        cin >> ipeso;
        cout << "sua altura em metros: ";
        cin >> faltura;
        cout << "Cor dos olhos (A-azul, P-reto, V-verde e C-castanho): ";
        cin >> colhos;
        cout << "Cor dos cabelos (P-preto, C-castanho, L-louro e R-ruivo: ";
        cin >> cabelo;
        i = i + 1;

    if (idade>50 && ipeso<60 )
    {
      icount1++;
    }
    if (faltura<1.5)
    {
        icount2++;
       inovaidade= inovaidade+ idade;
    }

    if (toupper(colhos) == 'A')
    {
        icount3++;
    }
    else if (toupper(cabelo)== 'R' && toupper(colhos) != 'A')
    {
        icount4++;
    }
    }

    cout << "Existem " << icount1 << " pessoas com idade superior a 50 anos e peso inferior a 60 kg. \n";
    if(icount2 != 0)
    {
         fmedia= (inovaidade/icount2);
         cout << "Existem " << icount2 << " pessoas com altura inferior a 1,50m e a m�dia de suas idades �: " << fmedia <<" anos. \n";
    }

    else
    {
       cout << "N�o existe pessoas com altura inferior a 1,50m. \n";
    }

    cout << "Existem " << ((float)icount3/6)* 100 << " % de pessoas com olhos azuis entre todas as pessoas analisadas. \n";
    cout << "Existem " << icount4 << "  pessoas ruivas e que n�o possuem olhos azuis. \n";


    return 0;
}

