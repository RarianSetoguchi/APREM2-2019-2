/**********************************************************
- Autor:     M�rio Neto
- Descri��o: convers�o de temperatura
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    //Declara��o de vari�veis
float fangulo=0;
float fdistescadaaparede=0;
float fmedidadadaescada=0;




    //Configura��o da tela de sa�da
    setlocale(LC_ALL,"");
    system("color 0b");

    //C�digo do programa

cout << " informe o �ngulo horizontal ";
cin >> fangulo;
cout << " informe a dist�ncia da escada � parede ";
cin >> fdistescadaaparede;

fmedidadadaescada= fdistescadaaparede/(cosine*fangulo);

cout << "a mediada da escada � " << fmedidadadaescada;

    return 0;
}
