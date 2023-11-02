#include <stdlib.h>
#include <stdio.h>

void Par_Impar(int *num)
{
    printf("Entre com um número: ");
    scanf("%d", num);

    if (*num % 2 == 0)
    {
        printf("%d é par\n", *num);
    }
    else
    {
        printf("%d é ímpar\n", *num);
    }
}

int main()
{
    int numero;
    Par_Impar(&numero);
    return 0;
}
