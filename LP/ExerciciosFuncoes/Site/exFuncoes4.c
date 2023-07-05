// Faça um programa, com uma função que necessite de um argumento. A função retorna o valor de caractere ‘P’, se seu argumento for positivo, e ‘N’, se seu argumento for zero ou negativo.

#include <stdio.h>

char positividade(int n) {
    if (n >= 0) {
        return 'P';
    } else {
        return 'N';
    }
}

int main() {
    int numero;

    printf("Insira um número: ");
    scanf("%d", &numero);

    printf("%c", positividade(numero));
}