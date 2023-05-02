// Faça um Programa que leia três números e mostre-os em ordem decrescente.

#include <stdio.h>

int main() {
    double numero1;
    double numero2;
    double numero3;
    int maiorNumero;
    int numeroMediano;
    int menorNumero;

    printf("Insira o primeiro número:\n");
    scanf("%lf", &numero1);
    printf("Insira o segundo número:\n");
    scanf("%lf", &numero2);
    printf("Insira o terceiro número:\n");
    scanf("%lf", &numero3);

    if (numero1 > numero2 && numero1 > numero3) {
        maiorNumero = 1;
    } else if (numero2 > numero1 && numero2 > numero3) {
        maiorNumero = 2;
    } else if (numero3 > numero1 && numero3 > numero2) {
        maiorNumero = 3;
    }

    if (numero1 < numero2 && numero1 < numero3) {
        menorNumero = 1;
    } else if (numero2 < numero1 && numero2 < numero3) {
        menorNumero = 2;
    } else if (numero3 < numero1 && numero3 < numero2) {
        menorNumero = 3;
    }

    if (1 != maiorNumero && 1 != menorNumero) {
        numeroMediano = 1;
    } else if (2 != maiorNumero && 2 != menorNumero) {
        numeroMediano = 2;
    } else if (3 != maiorNumero && 3 != menorNumero) {
        numeroMediano = 3;
    }

    printf("O maior número é o %iº número inserido\n", maiorNumero);
    printf("O segundo maior número é o %iº número inserido\n", numeroMediano);
    printf("O menor número é o %iº número inserido\n", menorNumero);
}