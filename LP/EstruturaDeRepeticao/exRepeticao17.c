// Faça um programa que calcule o fatorial de um número inteiro fornecido pelo usuário. Ex.: 5!=5.4.3.2.1=120

#include <stdio.h>

int main() {
    int numero1;
    long fatorial = 1;

    printf("Quer calcular o fatorial de qual numero?\n");
    scanf("%d", &numero1);


    for (int i = 0; i < numero1; i++) {
        fatorial = fatorial * (numero1 - i);
    }
    printf("O resultado é %ld", fatorial);

}