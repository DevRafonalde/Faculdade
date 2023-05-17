// Faça um programa que peça um número inteiro e determine se ele é ou não um número primo. Um número primo é aquele que é divisível somente por ele mesmo e por 1.

#include <stdio.h>

int main() {
    int numero;
    int isPrimo;
    printf("Digite um número:\n");
    scanf("%d", &numero);

    if (numero <= 1) {
        isPrimo = 0;
    }
    
    // Se um número não é primo, ele pode ser fatorado em 2 fatores (a e b) maiores que 1 pelo menos, certo?
    // Se a e b fossem maiores que a raiz desse número, quando vc multiplicar os 2, ele vai dar maior que o numero
    // Então, se você testar todos os "i" até que ele seja menor que a raiz do número, você consegue evitar que ele fique dividindo por números inúteis
    

    for (int i = 2; i * i <= numero; i++) {
        if (numero % i == 0) {
            isPrimo = 0;
        } else {
            isPrimo = 1;
        }
    }

    if (numero == 2) {
        isPrimo = 1;
    }

    if (isPrimo == 1) {
        printf("O número %d é um número primo", numero);
    } else {
        printf("O número %d não é um número primo", numero);
    }
}
