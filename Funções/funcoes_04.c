#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// calcular o gasto de combustível Gaia -> Faro

float calcularConsumo(float combustivel, float distancia, float consumo)
{
    return consumo * (distancia / 100) * combustivel;
}

int main()
{
    char carros[5][15];
    float consumos[5];
    float distancia;
    float combustivel;
    float custo;
    int numero;
    int i;

    printf("Calcular o custo de uma viagem de Gaia à Faro\n");

    // informar os carros e custos
    printf("Modelos com seus respectivos consumos:\n");
    
    sprintf(carros[0], "Seat");
    consumos[0] = 7.0;

    sprintf(carros[1], "Toyota");
    consumos[1] = 5.5;

    sprintf(carros[2], "BMW");
    consumos[2] = 11.0;

    sprintf(carros[3], "Mercedes");
    consumos[3] = 10.0;

    sprintf(carros[4], "Porsche");
    consumos[4] = 17.0;

    for (i = 0; i < 5; i++)
    {
        printf("%d - %s - %0.1fL/100km\n", i, carros[i], consumos[i]);
    }

    printf("Digite o número que corresponde ao modelo do seu carro: ");
    scanf("%d", &numero);

    printf("Digite a distância em km: ");
    scanf("%f", &distancia);

    printf("Digite o custo por litro de combustível em €: ");
    scanf("%f", &combustivel);

    custo = calcularConsumo(consumos[numero], distancia, combustivel);

    printf("O custo com combustível da viagem será de %0.2f€", custo);

    return 0;
}