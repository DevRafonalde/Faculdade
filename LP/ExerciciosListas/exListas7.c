// Faça um Programa que leia um vetor de 5 números inteiros, mostre a soma, a multiplicação e os números.
#include <stdio.h>

int main() {
    // int numeros[5] = {1, 2, 3, 4, 5}; Assim vc já define esses 5 números como os valores do vetor
    // Ou
    int numeros[5];
    int soma = 0;
    int multiplicacao = 1;

    // Assim vc pede pro usuário inserir quais serão os valores do vetor
    for (int i = 0; i < 5; i++) {
        printf("Digite o %dº número: ", i + 1);
        scanf("%d", &numeros[i]);
    }
    printf("\n");

    // Soma
    for (int i = 0; i < 5; i++) {
        soma += numeros[i];
    }
    printf("Soma: %d\n", soma);

    // Multiplicação
    for (int i = 0; i < 5; i++) {
        multiplicacao = multiplicacao * numeros[i];
    }
    printf("Multiplicação: %d\n", multiplicacao);

    // Números
    for (int i = 0; i < 5; i++) {
        printf("%dº número: %d\n", i + 1, numeros[i]);
    }   
}