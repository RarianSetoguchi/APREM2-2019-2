/**********************************************************
- Autor:     Thomas Nicolas
- Descri��o: ex 02
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    //Declara��o de vari�veis
    int inota1 = 0;
    int inota2 = 0;
    int imedia = 0;

    //Configura��o da tela de sa�da
    setlocale(LC_ALL,"");
    system("color F1");

    //C�digo do programa
    cout << "Digite as suas 2 notas : " <<endl;
    cin >> inota1;
    cin >> inota2;

    imedia = (inota1+inota2)/2;

    cout << "Sua media � " << imedia << endl;

    if (imedia < 3)
    {
        cout << "infelizmente voce foi reprovado :( " << endl;
    }
    else if(imedia<7)
    {
        cout << "voce esta de exame :! "<< endl;
    }
    else
    {
        cout << "PARABENS voce foi aprovado :)"<<endl;
    }

    return 0;
}
