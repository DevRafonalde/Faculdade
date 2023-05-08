// Tendo como dados de entrada a altura de uma pessoa, construa um algoritmo que
// calcule seu peso ideal, usando a seguinte fórmula: (72.7*altura) - 58
#include <stdio.h>

int main() {
  double altura;
  double imc;
  printf("Insira a altura:\n");
  scanf("%lf", &altura);
  imc = (72.7 * altura) - 58;
  printf("Seu peso ideal é: %lf kg", imc);
}