#include <stdio.h>

// função principal
/*void main()
{
    printf("somar dois números\n");

    int num1;
    int num2;
    int soma;

    printf("Introduzir Número 1: ");
    scanf("%d", &num1);

    printf("Introduzir Número 2: ");
    scanf("%d", &num2);

    soma = num1 + num2;

    printf("%d + %d = %d", num1, num2, soma);
}*/

int somar(int num1, int num2)
{
    int soma = num1 + num2;

    return soma;
}

void main()
{
    printf("%d + %d = %d", 2, 5, somar(2,5));
}