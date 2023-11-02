#include <stdlib.h>
#include <stdio.h>

int main()
{
    int i;
    int fim;
    int fact = 1;

    printf("Factorial? ");
    scanf("%d", &fim);

    for (i = 1; i <= fim; i++)
    {
        fact = fact * i;
    }

    printf("O factorial do número %d é %d", fim, fact);

    return 0;
}
