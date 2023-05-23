// Faça um Programa que peça a idade e a altura de 5 pessoas, armazene cada informação no seu respectivo vetor. Imprima a idade e a altura na ordem inversa a ordem lida.
#include <stdio.h>

int main() {
    int idade[5];
    double altura[5];

    for (int i = 0; i < 5; i++) {
        printf("Digite a idade da %dª pessoa: ", i + 1);
        scanf("%d", &idade[i]);
        printf("Digite a altura da %dª pessoa: ", i + 1);
        scanf("%lf", &altura[i]);
    }

    for (int i = 0; i < 5; i++) {
        printf("A altura da %dª pessoa é: %.2lf\n", i + 1, altura[i]);
        printf("A idade da %dª pessoa é: %d\n", i + 1, idade[i]);
    }
}