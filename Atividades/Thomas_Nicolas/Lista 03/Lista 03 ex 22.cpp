/**********************************************************
- Autor:     Seu nome
- Descri��o: Breve descri��o do programa
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    //Declara��o de vari�veis

    int i = 0;
    float idade = 1;
    float altura = 0;
    float itotal = 0;

    //Configura��o da tela de sa�da
    setlocale(LC_ALL,"");
    system("color F1");

    //C�digo do programa

    while (idade > 0)
    {
        idade = 0;
        cout << "Digite a idade: ";
        cin >> idade;
        cout << "Digite a altura: ";
        cin >> altura;

            if (idade > 50)
               {
                i+=1;
                itotal = altura+itotal;
               }
    } //fim do while

        cout << "A m�dia das alturas das pessoas com mais de 50 anos �: " << (itotal)/i;


    return 0;
}
