/********************************************************
- Autor: Jo�o Pedro Neves Baldin

- Descri��o: Lista 01 - Exerc�cio 08
********************************************************/
#include <iostream>

#include <conio.h>

#include <locale.h>

#include <cstdlib>

using namespace std;



int main()

{

    float pesokg, pesog;

    //Limpa a tela

    system("cls");

    // Ativa acentua��o

    setlocale(LC_ALL,"");

    // Mostra mensagem antes da leitura do peso

    cout << "\nInforme seu peso em quilogramas  ";

    // Recebe o peso em quilos

    cin >> pesokg;

    // Calcula o peso em gramas

    pesog = pesokg * 1000;

    // Mostra o peso em gramas

    cout << "\nSeu peso em gramas � " << pesog;

    // Para o programa a espera de um ENTER

    getch();

}
