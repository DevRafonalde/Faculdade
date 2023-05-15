// Faça um programa que leia uma quantidade indeterminada de números positivos e conte quantos deles estão nos seguintes intervalos: [0-25], [26-50], [51-75] e [76-100]. A entrada de dados deverá terminar quando for lido um número negativo.

#include <stdio.h>

int main() {
    int numero;
    int contador1 = 0;
    int contador2 = 0;
    int contador3 = 0;
    int contador4 = 0;

    do {
        printf("Insira um número qualquer:\n");
        scanf("%d", &numero);
        if (0 <= numero && numero <= 25) {
            contador1++;
        } else if (26 <= numero && numero <= 50) {
            contador2++;
        } else if (51 <= numero && numero <= 75) {
            contador3++;
        } else if (76 <= numero && numero <= 100) {
            contador4++;
        }
    } while (numero > 0);

    printf("Tem %d números no intervalo de [0-25].\n", contador1);
    printf("Tem %d números no intervalo de [26-50].\n", contador2);
    printf("Tem %d números no intervalo de [51-75].\n", contador3);
    printf("Tem %d números no intervalo de [76-100].\n", contador4);
    
}
