/**********************************************************
- Autor:     Huan oliveira
- Descri�ao base do triangulo
**********************************************************/
include <iostream>
#include <conio.h>
#include <locale.h>
#include <cstdlib>
using namespace std;

int main()
{
    float base, altura, area;
	// Limpa a tela
    system("cls");
    // Ativa acentua��o
    setlocale(LC_ALL,"");
	// Mostra mensagem antes da leitura da base
	cout << "\nDigite a base do tri�ngulo:  ";
	// Recebe a base
	cin >> base;
	// Mostra mensagem antes da leitura da altura
	cout << "\nDigite a altura do tri�ngulo: ";
	// Recebe a altura
	cin >> altura;
	// Calcula a  rea
	area = (base * altura)/2;
	// Mostra a  rea
	cout << "\n�rea do tri�ngulo, " << area;
	// Para o programa a espera de um ENTER
	getch();
}
