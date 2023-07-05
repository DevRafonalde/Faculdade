// Faça um programa para imprimir:
//     1
//     1   2
//     1   2   3
//     .....
//     1   2   3   ...  n
// para um n informado pelo usuário. Use uma função que receba um valor n inteiro imprima até a n-ésima linha.

 #include <stdio.h>

void imprimirNumeros(int n) {
    for (int i = 1; i <= n; i++) {
        for (int j = 0; j < i; j++) {
            printf("%d", j + 1);
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