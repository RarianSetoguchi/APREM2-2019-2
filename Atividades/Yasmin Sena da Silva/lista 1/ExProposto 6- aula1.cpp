/**********************************************************
- Autor:     Yasmin Sena
- Descri��o: Sal�rio e comiss�o
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    //Declara��o de vari�veis
    float fsalario = 0;
    float fvendas = 0;
    float fporc = 0.04;
    float fcomissao = 0;
    //Configura��o da tela de sa�da
    setlocale(LC_ALL,"");
    system("color F1");

    //C�digo do programa
    cout << "Digite seu sal�rio base: ";
    cin  >> fsalario;
    cout << "Insira o total obtido em suas vendas: ";
    cin  >> fvendas;

    fcomissao = fvendas * fporc;

    cout << "Sua comiss�o � de: "
         << fcomissao
         << " reais."
         << " E seu sal�rio final �: "
         << fcomissao + fsalario
         << " reais."

         << endl;


    return 0;
}
