/**********************************************************
- Autor:     Milene Caroline B. D. Chaves
- Descri��o: Comando while
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    //Declara��o de vari�veis
    int i = 0;
    int idade=0;
    int idadet=0;

    //Configura��o da tela de sa�da
    setlocale(LC_ALL,"");
    system("color F1");

    //C�digo do programa
    while (i < 10)
    {
        cout<< " digite sua idade: ";
        cin>> idade;
return 0;
        idadet=idadet+idade;return 0;
        i++;
    }

      cout<< " a media das idades �: " << idadet/i << endl;


}
