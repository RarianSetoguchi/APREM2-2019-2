/********************************************************
- Autor: Jo�o Pedro Neves Baldin

- Descri��o: Lista 01 - Exerc�cio 04
********************************************************/
#include <iostream>

#include <conio.h>

#include <locale.h>

#include <cstdlib>

using namespace std;



int main()

{

    float preco, novopre;

    //Limpa a tela

    system("cls");

    // Ativa acentua��o

    setlocale(LC_ALL,"");

    // Mostra mensagem antes da leitura do sal�rio

    cout << "\nInforme o pre�o do produto: $ ";

    // Recebe o valor do produto

    cin >> preco;

    // Calcula o pre�o com desconto

    novopre = preco - preco * 10/100;

    // Mostra o novo pre�o

    cout << "\nPre�o com desconto = $" << novopre;

    // Para o programa a espera de um ENTER

    getch();

}
