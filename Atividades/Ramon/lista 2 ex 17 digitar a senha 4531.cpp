/**********************************************************
- Autor:     ramon
- Descri��o: 17. Fa�a um programa que verifique a validade de uma senha fornecida pelo usu�rio. A senha � 4531. O
programa deve mostrar uma mensagem de permiss�o de acesso ou n�o
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    //Declara��o de vari�veis

float  fsenha = 0;

    //Configura��o da tela de sa�da
    setlocale(LC_ALL,"");
    system("color F1");

    //C�digo do programa
cout  << "programa de permissao de acesso"
      << endl;

      cout  << " digite a senha: ";
      cin   >> fsenha;

if (fsenha == 4531)
{
    cout  << "acesso permitido";
}
else
{


 cout  << " acesso negado, tente outra vez :( ";
}
    return 0;
}
