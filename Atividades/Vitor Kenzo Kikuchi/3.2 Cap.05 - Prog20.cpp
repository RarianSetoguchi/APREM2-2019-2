/**********************************************************
- Autor:     Vitor Kenzo Kikuchi
- Descri��o: Exerc�cio 03 - Este programa determina quantas pessoas est�o em cada faixa et�ria e a porcentagem.
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>
using namespace std;

main()
{
    int i = 1;
    int iIdade = 0;
    int iSoma15 = 0;
    int iSoma1630 = 0;
    int iSoma60 = 0;
    int iSoma3145 = 0;
    int iSoma4660 = 0;

    setlocale(LC_ALL,"");
    system("color F1");

    while (i < 9)
    {

    system("cls");
    cout << " \n\nDigite a idade da "
         << i
         << "� pessoa: ";
    cin  >> iIdade;

    cout << "\n\n";

    i += 1;

    if (iIdade <= 15)
    {
    iSoma15 += 1;
    }
    else if (iIdade >= 16 && iIdade <= 30)
    {
    iSoma1630 += 1;
    }
    else if (iIdade >= 31 && iIdade <=45)
    {
    iSoma3145 += 1;
    }
    else if (iIdade >= 46 && iIdade <= 60)
    {
    iSoma4660 += 1;
    }
    else
    {
    iSoma60 += 1;
    }

    system("pause");

    } // fim do la�o

    system("cls");
    cout << "\n"
         << iSoma15
         << " pessoas tem menos de 15 anos;\n"
         << iSoma1630
         << " est�o entre 16 a 30 anos; \n"
         << iSoma3145
         << " tem 31 a 45 anos; \n"
         << iSoma4660
         << " possuem 46 a 60 anos; \n"
         << iSoma60
         << " tem mais de 60 anos. \n"
         << endl;

    system("pause");

    cout << "\n\nA porcentagem de pessoas com menos de 15 anos � de "
         << (iSoma15 / 8.0)*100
         << "%; \n\n"
         << "J� a porcentagem de pessoas com mais de 60 anos, � de "
         << (iSoma60 / 8.0)*100
         << "%."
         << endl;

} // fim do main
