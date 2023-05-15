// Sendo H= 1 + 1/2 + 1/3 + 1/4 + ... + 1/N, Faça um programa que calcule o valor de H com N termos.

#include <stdio.h>

int main() {
    int qntdTermos;
    double soma = 0.0;

    printf("Digite quantos termos terá a soma:\n");
    scanf("%d", &qntdTermos);

    for (int i = 1; i <= qntdTermos; i++) {
        soma += (1.0/i);
    }

    printf("O resultado é %lf", soma);
    

}
