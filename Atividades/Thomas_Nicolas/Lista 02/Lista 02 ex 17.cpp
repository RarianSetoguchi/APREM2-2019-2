/**********************************************************
- Autor:     Thomas Nicolas
- Descri��o: Lista 02 ex 17
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    //Declara��o de vari�veis

    float fsenha = 0;

    //Configura��o da tela de sa�da
    setlocale(LC_ALL,"");
    system("color F1");

    //C�digo do programa
    cout << "Digite a senha: ";
    cin >> fsenha;

    if (fsenha == 5135)
        cout   <<"Acesso liberado" <<endl;

    else
        cout   <<"Acesso Negado" <<endl;

    return 0;
}
