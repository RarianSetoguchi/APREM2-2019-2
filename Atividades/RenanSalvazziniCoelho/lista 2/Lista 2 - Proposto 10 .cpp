/**********************************************************
- Autor:     Renan Salvazzini Coelho
- Descri��o: Lista 2 - Proposto 10
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    //Declara��o de vari�veis
    float fcusto = 0;

    //Configura��o da tela de sa�da
    setlocale(LC_ALL,"");
    system("color F1");

    //C�digo do programa
    cout << "Digite o custo de f�brica do carro: ";
    cin >> fcusto;
       
    if (fcusto < 12001)
    {
        cout << "O pre�o do carro novo para o consumidor � : " 
            << fcusto + (fcusto * 0.05)    
            << " reais "
        << endl;
    }
    else if (fcusto < 25001)
    {
        cout << "O pre�o do carro novo para o consumidor � : " 
            << fcusto + (fcusto * 0.10) + (fcusto * 0.15) 
            << " reais "
        << endl;
    } 
    else
    {
       cout << "O pre�o do carro novo para o consumidor � : " 
           << fcusto + (fcusto * 0.15) + (fcusto * 0.20)
           << " reais " 
       << endl;
    }
    return 0;
}



