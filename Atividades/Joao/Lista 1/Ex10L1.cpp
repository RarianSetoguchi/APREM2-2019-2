/********************************************************
- Autor: Jo�o Pedro Neves Baldin

- Descri��o: Lista 01 - Exerc�cio 10
********************************************************/
#include <iostream>

#include <conio.h>

#include <locale.h>

#include <cstdlib>

using namespace std;



int main()

{

    float lado, area;


    system("cls");//Limpa a tela
    setlocale(LC_ALL,"");// Ativa acentua��o


    cout << "\nInforme a lateral do quadrado "; // Recebe a variavel
    cin >> lado;

    area = lado * lado;// Calcula a �rea



    cout << "\nO quadrado tem uma �rea de " << area; // Mostra a �rea

    // Para o programa a espera de um ENTER

    getch();

}
