/**********************************************************
- Autor: Isabela Aparecida de Souza
- Descrição: Idade, altura e peso
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    int i = 0;
    int ii = 0;
    float fIdade = 0;
    float fAltura = 0;
    float fPeso = 0;
    float ftotal = 0;
    int insei = 0;
    int inaosei2 = 0;

    //setlocale(LC_ALL,"");
    //system("color F3");

    while (i < 3)
    {
        cout << "\nDigite sua idade: ";
        cin >> fIdade;

        cout << "Digite sua altura: ";
        cin >> fAltura;

        cout << "Digite seu Peso: ";
        cin >> fPeso;
        i++;

        if (fIdade > 50)
        { 
          ii++;
        }
	
        if (fIdade> 10 && fIdade < 20 )
        {
          ftotal=ftotal+fIdade;
         
          insei++;
        }

        if (fPeso < 40)
       { 
         inaosei2++;

	     }
    }
        cout << "O número de pessoas com idade superior a 50 anos é:" <<ii <<endl;
       if (insei != 0)
        {
          cout << "A media de pessoas entre 10 e 20 anos é:" <<ftotal/insei <<endl;
        }
        if (insei == 0)
        {
          cout << "A media de pessoas entre 10 e 20 anos é: 0";
        }
        cout << "A porcentagem de pessoa com peso inferior a 40kg: " << (inaosei2*100)/3;
}
