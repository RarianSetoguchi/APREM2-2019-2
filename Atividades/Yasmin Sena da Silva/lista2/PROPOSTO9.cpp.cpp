/**********************************************************
- Autor:     Yasmin Sena
- Descri��o: CR�DITO ESPECIAL
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    //Declara��o de vari�veis
    float fsaldo = 0;
    float fcredito1 = 0;
    float fcredito2 = 0;
    float fcredito3 = 0;
    float fcredito4 = 0;
    //Configura��o da tela de sa�da
    setlocale(LC_ALL,"");
    system("color F1");

    //C�digo do programa
    cout << "Digite o saldo m�dio: ";
    cin >> fsaldo;
    cout << "saldo m�dio em reais: "
         << fsaldo;        
         
         fcredito1= 0.1 * fsaldo;
         fcredito2= 0.2 * fsaldo;
         fcredito3= 0.25 * fsaldo;
         fcredito4= 0.3 * fsaldo;

    if (fsaldo <201)
    {
        cout << " Voc� possui um cr�dito especial de " 
        << fcredito1
        << " reais."
        << endl;
    }
    else if (fsaldo < 301)
    {
        cout << "Voc� possui um cr�dito especial de " 
        << fcredito2
        << " reais."
        << endl;
    }
   else if (fsaldo < 401)
    {
        cout << "Voc� possui um cr�dito especial de " 
        << fcredito3
        << " reais."
        << endl;
    }
   
    else
    {
       cout << "Voc� possui um cr�dito especial de " 
        << fcredito4
        << " reais."
        << endl;
    }

    return 0;
}
