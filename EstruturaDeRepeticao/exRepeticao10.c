// Faça um programa que receba dois números inteiros e gere os números inteiros que estão no intervalo compreendido por eles.
#include <stdio.h>

int main() {
    int numero1;
    int numero2;
    int contador;

    printf("Digite o primeiro número da sequência:\n");
    scanf("%d", &numero1);
    printf("Digite o último número da sequência:\n");
    scanf("%d", &numero2);

    contador = numero1 + 1;
    printf("Os números inteiros que estão no intervalo compreendido por esses números são:\n");
    while (contador != numero2) {
        printf("%d\n", contador);
        contador++;
    }
}