/**********************************************************
- Autor:     Gabriel Oliveira
- Descri��o: Lista 3 - Ex 3
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>
#include <cmath>
#include <ctype.h>


using namespace std;

int main()
{


    int iNumPessoas = 0;
    int iIdade = 0;
    int iResp1 = 0;
    int iResp2 = 0;
    int iResp3 = 0;
    int iResp4 = 0;
    int iResp5 = 0;
    float fPorcent1 = 0;
    float fPorcent2 = 0;


    setlocale(LC_ALL,"");
    system("color F1");



    while (iNumPessoas < 8)
    {
        cout << "Digite a idade da pessoa: ";
        cin >> iIdade;

        if (iIdade < 16)
        {
            iResp1 = iResp1 + 1;
        }

        else if (iIdade < 31)
        {
            iResp2 = iResp2 + 1;
        }

        else if (iIdade < 46)
        {
            iResp3 = iResp3 + 1;
        }

        else if (iIdade < 61)
        {
            iResp4 = iResp4 + 1;
        }

        else
        {
            iResp5 = iResp5 + 1;
        }

        iNumPessoas = iNumPessoas + 1;
    }

    cout << "N�mero de pessoas na primeira faixa et�ria: " << iResp1 << endl;
    cout << "N�mero de pessoas na segunda faixa et�ria: " << iResp2 << endl;
    cout << "N�mero de pessoas na terceira faixa et�ria: " << iResp3 << endl;
    cout << "N�mero de pessoas na quarta faixa et�ria: " << iResp4 << endl;
    cout << "N�mero de pessoas na quinta faixa et�ria: " << iResp5 << endl << endl;

    fPorcent1 = 100 * (float) iResp1 / 8;
    fPorcent2 = 100 * (float) iResp5 / 8;

    cout << "Porcentagem das pessoas na primeira faixa et�ria com rela��o ao total: " << fPorcent1 << "%" << endl << endl;

    cout << "Porcentagem das pessoas na �ltima faixa et�ria com rela��o ao total: " << fPorcent2 << "%";


    return 0;
}
