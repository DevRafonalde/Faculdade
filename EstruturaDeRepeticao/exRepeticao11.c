// Altere o programa anterior para mostrar no final a soma dos números.

// Programa anterior: Faça um programa que receba dois números inteiros e gere os números inteiros que estão no intervalo compreendido por eles.
#include <stdio.h>

int main() {
    int numero1;
    int numero2;
    int contador;
    int soma = 0;

    printf("Digite o primeiro número da sequência:\n");
    scanf("%d", &numero1);
    printf("Digite o último número da sequência:\n");
    scanf("%d", &numero2);

    contador = numero1 + 1;
    while (contador != numero2) {
        soma = soma + contador;
        contador++;
    }

    printf("A soma dos números inteiros que estão no intervalo compreendido por esses números é: %d\n", soma);
}