// Faça um programa que calcule o mostre a média aritmética de N notas.

#include <stdio.h>

int main() {
    int N;
    double media;
    double soma;
    double notas[N];
    printf("Digite o número de notas:\n");
    scanf("%d", &N);

    for (int i = 0; i < N; i++) {
        printf("Digite a nota %d:\n", i + 1);
        scanf("%lf", &notas[i]);
    }

    soma = 0;
    for (int i = 0; i < N; i++) {
        soma += notas[i];
    }

    media = soma / N;

    printf("A média das notas é: %.2lf\n", media);

    return 0;
}
