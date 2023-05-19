// Altere o programa anterior para que ele aceite apenas números entre 0 e 1000.

// Programa anterior: Faça um programa que, dado um conjunto de N números, determine o menor valor, o maior valor e a soma dos valores.

#include <stdio.h>

int main() {
    int menorNumero;
    int maiorNumero;
    int numero;
    int soma = 0;
    int tamanho;

    printf("Quantos números terão no conjunto?\n");
    scanf("%d", &tamanho);

    while (0 < numero || numero < 1000) {
        printf("Digite o 1º número entre 0 e 1000:\n");
        scanf("%d", &numero);
    }

    maiorNumero = numero;
    menorNumero = numero;
    for (int i = 0; i < tamanho - 1; i++) {
        while (0 < numero || numero < 1000) {
            printf("Digite o %dº número entre 0 e 1000:\n", i + 2);
            scanf("%d", &numero);
        }
        if (numero < menorNumero) {
            menorNumero = numero;
        }
        if (numero > maiorNumero) {
            maiorNumero = numero;
        }
        soma = soma + numero;
        
    }

    printf("O menor número é %d\n", menorNumero);
    printf("O maior número é %d\n", maiorNumero);
    printf("A soma é %d\n", soma);
    
}