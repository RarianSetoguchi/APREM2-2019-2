/**********************************************************
- Autor:     Huan oliveira
- Descri��o: salario
**********************************************************/
#include <iostream>
#include <conio.h>
#include <locale.h>
#include <cstdlib>
using namespace std;

int main()
{
    float sal, novosal;
    //Limpa a tela
    system("cls");
    // Ativa acentua��o
    setlocale(LC_ALL,"");
    // Mostra mensagem antes da leitura do sal�rio
    cout << "\nDigite o sal�rio do funcion�rio: ";
    // Recebe o sal�rio
    cin >> sal;
    // Calcula o novo sal�rio
    novosal = sal + sal * 25/100;
    // Mostra o novo sal�rio
    cout << "\nNovo sal�rio = " << novosal;
    // Para o programa a espera de um ENTER
    getch();
}
