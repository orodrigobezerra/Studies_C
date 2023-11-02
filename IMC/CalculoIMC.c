#include <stdio.h>

float CalcularIMC(float p, float a) {
  return p / (a * a);
}

void MostrarAnalise(float imc) {
  if (imc < 18.5) {
    printf("Abaixo do peso");
  } else if (imc < 25) {
    printf("Peso ideal");
  } else if (imc < 30) {
    printf("Cuidado, tem que fazer exercício");
  } else if (imc < 35) {
    printf("Obesidade");
  } else if (imc < 40) {
    printf("Obesidade grau 2");
  } else {
    printf("Está à porta da morte");
  }
}

int main() {
  float peso, altura, imc;
  char op;

  printf("Calcular Índice de massa corporal\n\n");

  do {
    printf("Digite o peso em kg: ");
    scanf("%f", &peso);

    printf("Digite a altura em metros: ");
    scanf("%f", &altura);
    imc = CalcularIMC(peso, altura);

    printf("IMC = %.2f. ", imc);
    MostrarAnalise(imc);

    while (getchar() != '\n'); // Limpa o buffer do teclado

    printf("\n\nContinuar [ENTER], sair [0]: ");
    op = getchar();

    // Limpa a tela do terminal (pode precisar de ajustes para Windows)
    //system("clear");
  } while (op != '0');

  printf("Volte sempre!\n");
  return 0;
}
