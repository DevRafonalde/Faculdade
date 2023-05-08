// Faça um programa que peça 10 números inteiros, calcule e mostre a quantidade de números pares e a quantidade de números impares.
#include <stdio.h>

int main() {
    int contadorPares = 0;
    int contadorImpares = 0;

    for (int i = 0; i < 10; i++) {
        int numero;
        int contador = i + 1;
        printf("Digite o %dº número:\n", contador);
        scanf("%d", &numero);
        if (numero % 2 == 1) {
            contadorImpares++;
        } else {
            contadorPares++;
        }
    }

    printf("Você digitou %d números pares e %d número ímpares.", contadorPares, contadorImpares);
}