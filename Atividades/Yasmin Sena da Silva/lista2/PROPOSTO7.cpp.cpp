/**********************************************************
- Autor:     Yasmin Sena
- Descri��o: sal�rio menor que 500... Aumento de 30%
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    //Declara��o de vari�veis
    float fsalario = 0;
    float faumento = 0;

    //Configura��o da tela de sa�da
    setlocale(LC_ALL,"");
    system("color F1");

    //C�digo do programa
    cout << "Digite o valor do seu sal�rio: ";
    cin >> fsalario;

    faumento = (1.3 * fsalario);

    if (fsalario < 500)
    {
        cout << "Voc� recebeu um aumento de 30%, seu sal�rio ser� de "
        << faumento
        <<" reais.=)"
        << endl;
    }

    else
    {
        cout << "Seu sal�rio permanece o mesmo." << endl;
    }

    return 0;
}
