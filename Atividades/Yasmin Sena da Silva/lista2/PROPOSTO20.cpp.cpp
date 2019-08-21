/**********************************************************
- Autor:     Yasmin Sena
- Descri��o: Categoria de Nata��o
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    //Declara��o de vari�veis
    int iidade = 0;
    
    //Configura��o da tela de sa�da
    setlocale(LC_ALL,"");
    system("color F1");

    //C�digo do programa
    cout << "Digite a sua idade: ";
    cin >> iidade;

    if (iidade <5)
    {
        cout << "Voc� n�o possui idade suficiente para entrar em uma categoria de nata��o. " 
        << endl;
    }
    else if (iidade < 8)
    {
        cout << "Sua categoria na nata��o �: INFANTIL. " 
        << endl;
    }
   else if (iidade < 11)
    {
        cout << "Sua categoria na nata��o �: JUVENIL. " 
        << endl;
    }
    else if (iidade < 16)
    {
        cout << "Sua categoria na nata��o �: ADOLESCENTE. " 
        << endl;
    }
     else if (iidade < 31)
    {
        cout << "Sua categoria na nata��o �: ADULTO. " 
        << endl;
    }
    else
    {
        cout << "Sua categoria na nata��o �: S�NIOR. "
         << endl;
    }

    return 0;
}
