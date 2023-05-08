// Faça um Programa que leia três números e mostre o maior e o menor deles.

#include <stdio.h>

int main() {
    double numero1;
    double numero2;
    double numero3;

    printf("Insira o primeiro número:\n");
    scanf("%lf", &numero1);
    printf("Insira o segundo número:\n");
    scanf("%lf", &numero2);
    printf("Insira o terceiro número:\n");
    scanf("%lf", &numero3);

    if (numero1 > numero2 && numero1 > numero3) {
        printf("O primeiro número é o maior");
    } else if (numero2 > numero1 && numero2 > numero3) {
        printf("O segundo número é o maior");
    } else if (numero3 > numero1 && numero3 > numero2) {
        printf("O terceiro número é o maior");
    }

    printf("\n");

    if (numero1 < numero2 && numero1 < numero3) {
        printf("O primeiro número é o menor");
    } else if (numero2 < numero1 && numero2 < numero3) {
        printf("O segundo número é o menor");
    } else if (numero3 < numero1 && numero3 < numero2) {
        printf("O terceiro número é o menor");
    }
}