//**********************************************************
// Autor:  Isabela Ap de Souza
// Descri��o:  ex01 par, impar
//**********************************************************

#include <iostream>

using namespace std;

int main()
{
    int i = 0; // controla o la�o
    int vet[6]; // declara��o de vetor de 6 posi��es
    int iContPar = 0; // contagem de n�meros pares

       cout << "\nElementos do vetor: " << endl;
    // imprime o vetor
    for (i = 0; i < 6; i++)
    {
        cout << vet[i] << "\t";
    }
    // verifica exist�ncia de n�meros pares no vetor
    for (i = 0; i < 6; i++)
    {
        if (vet[i] % 2 == 0)
        {
            iContPar++;
        }
    }
    cout << "\n\nTotal de pares : " << iContPar << endl;

return 0;
}

