#include <stdio.h>
#include <stdlib.h>
# define T 3 //atribui o 3 ao T

int main()
{
    // Declaração de variáveis
    int i; // Variável para utilizar o for
    int numeros[3]; // Array de inteirospara guardar os números
    int aux;
    int j;


    // Solicitar ao utilizador 10 números

    printf("Introduza %d números\n", T);

    for (i = 0; i < T; i++) // Percorre a introdução de números por 10x
    {
        printf("%d. Número? ", i+1);  // 1. Número?
        scanf("%d", &numeros[i]);
    }

    printf("Números introduzidos\n");

    for (i = 0; i < T; i++)
    {
        printf("%10d\n", numeros[i]);  // 1. Número?
    }
    
    for (i = 0; i < T; i++)
    {
        for (j = i + 1; j < T; j++)
        {
            if (numeros[i] > numeros[j])
            {
                aux = numeros[i];
                numeros[i] = numeros[j];
                numeros[j] = aux;
            }
        }
    }

    printf("Números ordenados\n");

    for (i = 0; i < T; i++)
    {
        printf("%10d\n", numeros[i]); 
    }

    return 0;

}