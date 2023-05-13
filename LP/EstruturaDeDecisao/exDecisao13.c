// Faça um Programa que leia um número e exiba o dia correspondente da semana.
// (1-Domingo, 2- Segunda, etc.), se digitar outro valor deve aparecer valor inválido.
#include <stdio.h>

int main() {
    int dia;
    printf("Digite o numero do dia da semana (1-Domingo, 2- Segunda, etc.)\n");
    scanf("%d", &dia);


    if (dia == 1) {
        printf("Domingo\n");
    } else if (dia == 2) {
        printf("Segunda\n");
    } else if (dia == 3) {
        printf("Terça\n");
    } else if (dia == 4) {
        printf("Quarta\n");
    } else if (dia == 5) {
        printf("Quinta\n");
    } else if (dia == 6) {
        printf("Sexta\n");
    } else if (dia == 7) {
        printf("Sábado\n");
    }

// Ṕode ser feito assim ou da maneira abaixo
// (caso queira que explique esse de baixo, manda msg no zap)

    switch (dia) {
        case 1:
            printf("Domingo\n");
            break;
        case 2:
            printf("Segunda\n");
            break;
        case 3:
            printf("Terça\n");
            break;
        case 4:
            printf("Quarta\n");
            break;
        case 5:
            printf("Quinta\n");
            break;
        case 6:
            printf("Sexta\n");
            break;
        case 7:
            printf("Sábado\n");
            break;
        default:
            printf("Número inválido\n");
            break;
    }
}