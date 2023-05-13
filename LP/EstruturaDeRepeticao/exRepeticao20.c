// Altere o programa de cálculo do fatorial, permitindo ao usuário calcular o fatorial várias vezes e limitando o fatorial a números inteiros positivos e menores que 16.
// Programa do fatorial (17): Faça um programa que calcule o fatorial de um número inteiro fornecido pelo usuário. Ex.: 5!=5.4.3.2.1=120 

#include <stdio.h>

int main() {
    int deNovo;
    do {
        int numero1;
        long fatorial = 1;
        do {
            printf("Digite um número menor que 16 para calcular o fatorial:\n");
            scanf("%d", &numero1);
        } while (0 > numero1 || numero1 > 16);

        for (int i = 0; i < numero1; i++) {
            fatorial = fatorial * (numero1 - i);
        }
        printf("O resultado é %ld\n", fatorial);
        printf("Deseja calcular outro? \"1\" para sim ou \"2\" para não\n");
        scanf("%d", &deNovo);
        
    } while (deNovo == 1);

}