// Faça um programa, com uma função que necessite de três argumentos, e que forneça a soma desses três argumentos.

#include <stdio.h>

int soma(int a, int b, int c) {
    return a + b + c;
}

int main() {
    int a;
    int b;
    int c;

    printf("Insira 3 valores: ");
    scanf("%d %d %d", &a, &b, &c);

    printf("%d", soma(a, b, c));
}