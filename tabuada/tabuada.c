#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numeros[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int tabuada[10];
    int i;
    int num;

    printf("Deseja visualizar a tabuada de que número? ");
    scanf("%d", &num);
    
    for (i = 0; i < 10; i++)
    {
        tabuada[i] = (i + 1) * num;
    }

    for (i = 0; i < 10; i++)
    {
        printf("%d x %d = %d\n", num, numeros[i], tabuada[i]);
    }

    return 0;
}