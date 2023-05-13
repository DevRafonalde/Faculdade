// A série de Fibonacci é formada pela seqüência 0,1,1,2,3,5,8,13,21,34,55,... Faça um programa que gere a série até que o valor seja maior que 500.

#include <stdio.h>

int main() {
    int numero1 = 0;
    int numero2 = 1;
    int numero3 = 0;

    printf("A sequência é: 0, 1, ");
    while (numero3 < 500) {
    
        numero3 = numero1 + numero2;
        numero1 = numero2;
        numero2 = numero3;

        if (numero3 < 500) {
            printf("%d, ", numero3);
        }
    }

    printf("\n");

    
    

    
}