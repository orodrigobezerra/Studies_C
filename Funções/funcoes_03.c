#include <stdio.h>
#include <math.h>

// calcular juros compostos

int main()
    {
        printf("Calcular juros\n");
        int capital;
        float taxa;
        int tacumular;
        int tempo;
        float resultado;

        printf("Entre com o valor do capital inicial: ");
        scanf("%d", &capital);
        taxa = 0.05;
        tacumular = 12;
        tempo = 5;

        resultado = capital*pow((1 + taxa/tacumular),(tacumular*tempo));

        printf("Ao final de %d anos, o valor será de %0.2f€", tempo, resultado);

        return 0;
    }