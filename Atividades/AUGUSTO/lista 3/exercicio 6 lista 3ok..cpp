/**********************************************************
- Autor:     Lineu Lima
- Descri��o: Comando switch com n�meros
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>
using namespace std;

main()
{
    char cEscolha = 0;
    float fvalor = 0;
    float fvalorp=0;
    float fvalorpt=0;
    float fvalorv=0;
    float fvalorvt=0;
    int i = 0;

    setlocale(LC_ALL,"");
    system("color F1");



     while (i < 15)
    {
        cout<<"valor da compra";
        cin>> fvalor;
        i = i + 1;




        system("cls");
        cout << "----------------------------------------\n\n";
        cout << " (P) - Prazo \n\n";
        cout << " (V) - A vista\n\n";
        cout << "----------------------------------------\n\n";

        cout << "Op��o: ";
        cin >> cEscolha;


        switch(towlower(cEscolha))
        {
        case 'p':
            cout << "Voc� escolheu prazo!\n";
            (fvalorpt=fvalor+fvalorpt);

          system("pause");
            break;
        case 'v':
            cout << "Voc� escolheu a vista!\n";
            (fvalorvt=fvalor+fvalorvt);
            system("pause");
            break;

        } // fim do switch
    } // fim do la�o
           cout<<"valor a prazo acumolado :"<<fvalorpt <<"R$"   <<"\n";
           cout<<"valor a vista acumolado :"<<fvalorvt <<"R$"  <<"\n";
} // fim do main

