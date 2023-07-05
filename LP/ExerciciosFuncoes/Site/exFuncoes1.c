// Faça um programa para imprimir:
//     1
//     2   2
//     3   3   3
//     .....
//     n   n   n   n   n   n  ... n
// para um n informado pelo usuário. Use uma função que receba um valor n inteiro e imprima até a n-ésima linha.

 #include <stdio.h>

void imprimirNumeros(int n) {
    for (int i = 1; i <= n; i++) {
        for (int j = 0; j < i; j++) {
            printf("%d", i);
        }
        printf("\n");
    }
}

 int main() {
    int numero;

    printf("Insira um número: ");
    scanf("%d", &numero);

    imprimirNumeros(numero);
 }