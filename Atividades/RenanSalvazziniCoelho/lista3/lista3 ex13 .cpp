/**********************************************************
- Autor:     Renan Salvazzini Coelho
- Descri��o: Lista 3 Exerc�cio 13
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
    float fcontagem1 = 0;
    float fcontagem2 = 0;
    float fcontagem3 = 0;
    float fcontagem4 = 0;
    int ipeso= 0 ;
    float fpeso1alt =0 ;
    float fpeso2alt =0 ;
    float fpeso3alt =0 ;
    float fpeso4alt =0 ;
    //Configura��o da tela de sa�da
    setlocale(LC_ALL,"");
    system("color F1");

    //C�digo do programa
    cout << "Informe a idade e o peso de 15 pessoas,consecutivamente:  " <<endl;

    while (i < 15)
    {
        cout << "Digite a " << i + 1 << "� idade: ";
        cin >> iidade;
        cout << " e "<< i+1<<"� peso: ";
        cin >> ipeso;
        i=i + 1;

    if(iidade < 11)
    {
        fpeso1alt=fpeso1alt + ipeso;
        fcontagem1=fcontagem1+1;
    }
    else if(iidade< 21)
    {
        fpeso2alt=fpeso2alt + ipeso;
        fcontagem2=fcontagem2+1;
    }
    else if(iidade< 31)
    {
        fpeso3alt=fpeso3alt + ipeso;
        fcontagem3=fcontagem3+1;
    }
    else
    {
        fpeso4alt=fpeso4alt + ipeso;
        fcontagem4=fcontagem4+1;
    }
    }
    cout << "A m�dia do peso da  primeira faixa et�ria �: " << fpeso1alt/fcontagem1  <<endl;
    cout << "A m�dia do peso da  segunda faixa et�ria �: " << fpeso2alt/fcontagem2  <<endl;
    cout << "A m�dia do peso da  terceira faixa et�ria �: " << fpeso3alt/fcontagem3  <<endl;
    cout << "A m�dia do peso da  quarta faixa et�ria �: " << fpeso4alt/fcontagem4  <<endl;


    return 0;
}


