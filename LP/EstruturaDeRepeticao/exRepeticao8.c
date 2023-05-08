// Faça um programa que leia 5 números e informe a soma e a média dos números.
#include <stdio.h>

int main() {
    double numeros[5];
    double soma;
    double media;

    for (int i = 0; i < 5; i++) {
        int contador = i + 1;
        printf("Insira o %dº número:\n", contador);
        scanf("%lf", &numeros[i]);
    }

    for (int i = 0; i < 5; i++) {
        soma = soma + numeros[i];
    }
    printf("A soma dos números é %.2lf\n", soma);

    media = soma / 5;

    printf("A média dos números é %.2lf\n", media);
    
}