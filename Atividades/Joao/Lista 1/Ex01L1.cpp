/********************************************************

- Autor: Jo�o Pedro Neves Baldin

- Descri��o: Lista 01 - Exerc�cio 01

********************************************************/

#include <stdio.h>

int main()
{
    float num1, num2, sub;

    printf("Digite o primeiro numero: " );
    scanf("%f", &num1);

    printf("Digite o segundo numero: " );
    scanf("%f", &num2);

    //Subtra��o
    sub = num1 - num2;



    printf("%.2f - %.2f = %.2f\n", num1, num2, sub);

}
