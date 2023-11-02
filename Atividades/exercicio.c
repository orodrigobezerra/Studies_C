#include <stdio.h>
#include <string.h>

// Diapositivo 25
int main()
{
    int contador;

    for (contador = 1; contador <= 5; contador++)
    {
        printf("%d", contador);
    }

    printf("\n");

    return 0;
}

// Diapositivo 27
int main()
{
    int idade;

    printf("Digite sua idade: ");
    scanf("%d", &idade);

    if (idade >= 18)
    {
        printf("Você é maior de idade!");
    }
    else
    {
        printf("Você é menor de idade!");
    }

    return 0;
}

// Diapositivo 26
int main()
{
    int contador = 1;

    while (contador <= 5)
    {
        printf("%d", contador);
        contador++;
    }

    printf("\n");

    return 0;
}

// Diapositivo 28
int main()
{
    int numero;

    do
    {
        printf("Digite um número positivo: ");
        scanf("%d", &numero);
    } while (numero >= 0); // essa expressão permite que voltemos a digitar um número caso o que tenha sido digitado seja negativo ou outra coisa

    printf("Número digitado: %d'n", numero);

    return 0;
}

// Diapositivo 29
int main()
{
    int dia;
    printf("Digite o número do dia da semana (1 a 7): ");
    scanf("%d", &dia);

    switch (dia)
    {
    case 1:
        printf("Domingo\n");
        break;
    case 2:
        printf("Segunda-feira\n");
        break;
    case 3:
        printf("Terça-feira\n");
        break;
    case 4:
        printf("Quarta-feira\n");
        break;
    case 5:
        printf("Quinta-feira\n");
        break;
    case 6:
        printf("Sexta-feira\n");
        break;
    case 7:
        printf("Sábado\n");
        break;
    default:
        printf("Número de dia inválido\n");
        break;
    }
}

// Diapositivo 30
typedef struct
{
    char nome[50];
    int idade;
}

Pessoa;

int main()
{
    Pessoa pessoa1;

    printf("Digite o nome da pessoa: ");
    scanf("%s", pessoa1.nome);

    printf("Digite a idade da pessoa: ");
    scanf("%d", &pessoa1.idade);

    printf("Nome: %s\n", pessoa1.nome);
    printf("Idade: %d anos\n", pessoa1.idade);

    return 0;
}

// Diapositivo 31
enum DiaSemana
{
    Domingo,
    Segunda,
    Terça,
    Quarta,
    Quinta,
    Sexta,
    Sábado
};

int main()
{
    enum DiaSemana hoje = Terça;

    if (hoje == Domingo || hoje == Sábado)
    {
        printf("É fim de semana!\n");
    }
    else
    {
        printf("Não é fim de semana.\n");
    }

    return 0;
}
