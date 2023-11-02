#include <stdio.h>
#include <locale.h>

#define TAM 2

// Protótipos das funções
float media(float notas[]);
float maximo(float notas[]);
float minimo(float notas[]);
int aluno_maximo(float notas[]);
int aluno_minimo(float notas[]);
float frequencia(float notas[]);

// Função para calcular a média das notas
float media(float notas[]) {
    int i;
    float soma = 0;

    for (i = 0; i < TAM; i++) {
        soma = soma + notas[i];
    }

    return soma / TAM;
}

// Função para calcular a nota máxima
float maximo(float notas[]) {
    int i;
    float max = notas[0];

    for (i = 1; i < TAM; i++) {
        if (notas[i] > max) {
            max = notas[i];
        }
    }

    return max;
}

// Função para calcular a nota mínima
float minimo(float notas[]) {
    int i;
    float min = notas[0];

    for (i = 1; i < TAM; i++) {
        if (notas[i] < min) {
            min = notas[i];
        }
    }

    return min;
}

// Função para identificar o índice do aluno com a nota máxima
int aluno_maximo(float notas[]) {
    int i;
    float max = notas[0];
    int indice = 0;

    for (i = 0; i < TAM; i++) {
        if (notas[i] > max) {
            max = notas[i];
            indice = i;
        }
    }

    return indice;
}

// Função para identificar o índice do aluno com a nota mínima
int aluno_minimo(float notas[]) {
    int i;
    float min = notas[0];
    int indice = 0;

    for (i = 0; i < TAM; i++) {
        if (notas[i] < min) {
            min = notas[i];
            indice = i;
        }
    }

    return indice;
}

// Função para identificar a nota mais frequente
float frequencia(float notas[]) {
    int i, j;
    int max = 0;
    float res = -1.0;

    for (i = 0; i < TAM; i++) {
        int contar = 0;

        for (j = 0; j < TAM; j++) {
            if (notas[i] == notas[j]) {
                contar++;
            }
        }

        if (contar > max) {
            max = contar;
            res = notas[i];
        }
    }

    return res;
}

int main() {
    setlocale(LC_ALL, "portuguese");

    char nomes[TAM][15]; // 2 nomes de até 15 caracteres
    float notas[TAM];
    int i;

    for (i = 0; i < TAM; i++) {
        printf("Nome? ");
        scanf("%s", &nomes[i]);
        printf("Nota? ");
        scanf("%f", &notas[i]);
    }

    for (i = 0; i < TAM; i++) {
        printf("%s -> %.2f\n", nomes[i], notas[i]);
    }

    printf("A média é: %.2f\n", media(notas));
    printf("A nota máxima é: %.2f do aluno %s\n", maximo(notas), nomes[aluno_maximo(notas)]);
    printf("A nota mínima é: %.2f do aluno %s\n", minimo(notas), nomes[aluno_minimo(notas)]);
    printf("A nota frequente é: %.2f\n", frequencia(notas));

    return 0;
}
