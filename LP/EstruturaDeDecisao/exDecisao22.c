// Faça um Programa que peça um número inteiro e determine se ele é par ou impar.
// Dica: utilize o operador módulo (resto da divisão).
#include <stdio.h>

int main() {
    int numero;
    printf("Insira um número:\n");
    scanf("%d", &numero);

    if (numero % 2 == 0) {
        printf("O número é par");
    } else {
        printf("O número é impar");
    }
    
}