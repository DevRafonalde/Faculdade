// Faça um programa que leia 5 números e informe o maior número.

#include <stdio.h>

int main() {
    int maior;
    int numero;

    printf("Digite um número:\n");
    scanf("%d", &numero);
    maior = numero;

    for (int i = 0; i < 4; i++) {
        printf("Digite um número:\n");
        scanf("%d", &numero);
        if (numero > maior) {
            maior = numero;
        }
    }

    printf("O maior número é: %d", maior);
    
}