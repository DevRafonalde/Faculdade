// Faça um Programa que peça um número correspondente a um determinado ano e em seguida informe se este ano é ou não bissexto.
#include <stdio.h>

int main() {
    int ano;

    printf("Digite o ano:\n");
    scanf("%d", &ano);

    if (ano % 4 == 0) {
        printf("Esse ano é bissexto.\n");
    } else {
        printf("Esse ano não é bissexto.\n");
    }
    
}