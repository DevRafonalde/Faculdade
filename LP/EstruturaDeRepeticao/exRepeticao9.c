// Faça um programa que imprima na tela apenas os números ímpares entre 1 e 50.

#include <stdio.h>

int main() {
    int numero = 1;
    while (numero != 51) {
        if (numero % 2 == 1) {
            printf("%d\n", numero);
        }
        numero++;        
    }    
}