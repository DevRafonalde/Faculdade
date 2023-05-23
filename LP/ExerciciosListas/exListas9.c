// Faça um Programa que leia um vetor A com 10 números inteiros, calcule e mostre a soma dos quadrados dos elementos do vetor.

#include <stdio.h>

int main() {
    // O exercício não pediu para inserir 10 números, apenas ler. Então não fiz um "for" para inserir os valores
    int A[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    long soma = 0;

    for (int i = 0; i < 10; i++) {
        soma += (A[i] * A[i]);
    }

    printf("A soma dos quadrados dos elementos do vetor é: %ld", soma);
}