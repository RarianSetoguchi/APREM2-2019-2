/**********************************************************
- Autor:     Huan oliveira
- Descri�ao pes,polegadas,jardas,milhas
**********************************************************/

pro9 p�s jardas milhas
#include <iostream>
#include <conio.h>
#include <locale.h>
#include <cstdlib>
#include <math.h>
using namespace std;

int main()
{
    float jardas, milhas;
	// Limpa a tela
    system("cls");
    // Ativa acentua��o
    setlocale(LC_ALL,"");
	// Mostra a medida em jardas
	cout << "\nEm jardas  = " << jardas;
	// Mostra a medida em milhas
	cout << "\nEm milhas  = " << milhas;
	// Para o programa a espera de um ENTER
	getch();
}

