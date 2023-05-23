// Altere o programa anterior, intercalando 3 vetores de 10 elementos cada.
// Programa anterior (exListas10): Faça um Programa que leia dois vetores com 10 elementos cada. Gere um terceiro vetor de 20 elementos, cujos valores deverão ser compostos pelos elementos intercalados dos dois outros vetores.

// Nesse eu vou fazer de uma forma que pode também ser aplicada no exListas10, vai do gosto.

#include <stdio.h>

int main() {
    int vetor1[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int vetor2[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int vetor3[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int vetor4[30];
    int indice1 = 0;
    int indice2 = 0;
    int indice3 = 0;
    int indice4 = 0;

    while (indice1 < 10 && indice2 < 10 && indice3 < 10) {
        vetor4[indice4] = vetor1[indice1];
        indice4++;
        vetor4[indice4] = vetor2[indice2];
        indice4++;
        vetor4[indice4] = vetor3[indice3];
        indice1++;
        indice2++;
        indice3++;
        indice4++;
    }

    printf("O vetor 4 é composto pelos números ");
    for (int i = 0; i < 30; i++) {
        if (i != 29) {
            printf("%d, ", vetor4[i]);
        } else {
            printf("%d\n", vetor4[i]);
        }
    }
}