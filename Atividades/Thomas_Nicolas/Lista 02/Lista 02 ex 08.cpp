/**********************************************************
- Autor:     Thomas Nicolas
- Descri��o: Lista 02 ex 08
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    //Declara��o de vari�veis

    int isalario = 0;

    //Configura��o da tela de sa�da
    setlocale(LC_ALL,"");
    system("color F1");

    //C�digo do programa
    cout << "Digite o valor do seu salario: ";
    cin >> isalario;

    if (isalario<300)
        cout   <<"voce recebera um aumento de 35%, e seu salario final �: " <<isalario*1.35 <<endl;

    else
        cout   <<"voce recebera um aumento de 15%, e seu salario final �: " <<isalario*1.15 <<endl;

    return 0;
}
