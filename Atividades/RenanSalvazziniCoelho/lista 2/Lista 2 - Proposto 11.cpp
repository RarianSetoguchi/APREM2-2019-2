/**********************************************************
- Autor:     Renan Salvazzini Coelho
- Descri��o: Lista 2 - Proposto 9
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    //Declara��o de vari�veis
    float fsalario = 0;

    //Configura��o da tela de sa�da
    setlocale(LC_ALL,"");
    system("color F1");

    //C�digo do programa
    cout << "Digite seu sal�rio em reais : ";
    cin >> fsalario;

    if (fsalario < 301)
    {
        cout << "Voc� ter� um aumento de 15 porcento, sendo esse  " 
            << fsalario * 0.15    
            << " reais.  Seu novo sal�rio � de "
            << fsalario * 1.15
            <<" reais"
        << endl;
    }
    else if (fsalario < 600)
    {
       cout << "Voc� ter� um aumento de 10 porcento, sendo esse  " 
            << fsalario * 0.10    
            << " reais.  Seu novo sal�rio � de "
            << fsalario * 1.10
            << " reais"
        << endl;    
    } 
    else if (fsalario < 901)
    {
      cout << "Voc� ter� um aumento de 5 porcento, sendo esse  " 
            << fsalario * 0.05    
            << " reais.  Seu novo sal�rio � de "
            << fsalario * 1.05
            <<" reais"
        << endl;
    }
    else
    {
         cout << "Voc� ter� um aumento de 0 porcento, sendo esse  " 
            << fsalario * 0.0   
            << " reais.  Seu novo sal�rio � de "
            << fsalario * 1
            <<" reais"
        << endl;
    }
    return 0;
}



