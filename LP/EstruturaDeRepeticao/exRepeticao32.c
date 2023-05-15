// Faça um programa que calcule o fatorial de um número inteiro fornecido pelo usuário. Ex.: 5!=5.4.3.2.1=120. A saída deve ser conforme o exemplo abaixo:
//      Fatorial de: 5
//      5! =  5 . 4 . 3 . 2 . 1 = 120

#include <stdio.h>

int main() {
    int numero;
    int numeroFatorial;
    long fatorial = 1;

    printf("Quer calcular o fatorial de qual numero?\n");
    scanf("%d", &numero);

    printf("Fatorial de: %d\n%d! = ", numero, numero);
    for (int i = 0; i < numero; i++) {
        numeroFatorial = -(i - numero);
        fatorial = fatorial * numeroFatorial;
        // Esse if é apenas para arrumar a fomratação do texto de saída
        if (i == numero - 1) {
            printf("%d = ", numeroFatorial);
        } else {
            printf("%d . ", numeroFatorial);
        }
    }
    printf("%ld", fatorial);
}