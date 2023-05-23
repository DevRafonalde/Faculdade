// Faça um Programa que leia dois vetores com 10 elementos cada. Gere um terceiro vetor de 20 elementos, cujos valores deverão ser compostos pelos elementos intercalados dos dois outros vetores.

#include <stdio.h>

int main() {
    int vetor1[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int vetor2[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int vetor3[20];
    int index1 = 0;
    int index2 = 0;

    for (int i = 0; i < 20; i++) {
        if (i % 2 == 0) {
            vetor3[i] = vetor1[index1];
            index1++;
        } else {
            vetor3[i] = vetor2[index2];
            index2++;
        }
    }

    printf("O vetor 3 é composto pelos números ");
    for (int i = 0; i < 20; i++) {
        if (i != 19) {
            printf("%d, ", vetor3[i]);
        } else {
            printf("%d\n", vetor3[i]);
        }
    }
}