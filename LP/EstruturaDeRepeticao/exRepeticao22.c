// Altere o programa de cálculo dos números primos, informando, caso o número não seja primo, por quais número ele é divisível.
// Programa de cálculo dos números primos: Faça um programa que peça um número inteiro e determine se ele é ou não um número primo. Um número primo é aquele que é divisível somente por ele mesmo e por 1.

#include <stdio.h>

int main() {
    int numero;
    int isPrimo;
    printf("Digite um número:\n");
    scanf("%d", &numero);

    if (numero <= 1) {
        isPrimo = 0;
    }

    printf("O número é divisível por 1, ");

    for (int i = 2; i <= numero; i++) {
        if (numero % i == 0) {
            isPrimo = 0;
            // Isso aqui é só pra arrumar a formatação do texto de saída
            if (i != numero) {
                printf("%d, ", i);
            }
        } else {
            isPrimo = 1;
        }
    }

    printf("%d.\n", numero);

    if (numero == 2) {
        isPrimo = 1;
    }

    if (isPrimo == 1) {
        printf("O número %d é um número primo", numero);
    } else {
        printf("O número %d não é um número primo", numero);
    }
}