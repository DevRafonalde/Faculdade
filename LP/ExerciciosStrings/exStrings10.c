// Número por extenso. Escreva um programa que solicite ao usuário a digitação de um número até 99 e imprima-o na tela por extenso.

#include <stdio.h>

void printDezena(int num) {
    switch (num) {
        case 2: printf("Vinte "); break;
        case 3: printf("Trinta "); break;
        case 4: printf("Quarenta "); break;
        case 5: printf("Cinquenta "); break;
        case 6: printf("Sessenta "); break;
        case 7: printf("Setenta "); break;
        case 8: printf("Oitenta "); break;
        case 9: printf("Noventa "); break;
    }
}

void printUnidade(int num) {
    switch (num) {
        case 0: printf("Zero\n"); break;
        case 1: printf("Um\n"); break;
        case 2: printf("Dois\n"); break;
        case 3: printf("Tres\n"); break;
        case 4: printf("Quatro\n"); break;
        case 5: printf("Cinco\n"); break;
        case 6: printf("Seis\n"); break;
        case 7: printf("Sete\n"); break;
        case 8: printf("Oito\n"); break;
        case 9: printf("Nove\n"); break;
    }
}

int main() {
    int numero;

    // Aqui eu verifico se o número realmente está no intervalo solicitado e continuo perguntando enquanto o número informado não estiver dentro do intervalo
    do {
        printf("Digite um numero de 0 a 99: ");
        scanf("%d", &numero);
    } while (numero < 0 || numero > 99);
    

    if (numero < 10) {
        printUnidade(numero);
    } else {
        int dezena = numero / 10;
        int unidade = numero % 10;

        if (dezena == 1) {
            switch (unidade) {
                case 0: printf("Dez\n"); break;
                case 1: printf("Onze\n"); break;
                case 2: printf("Doze\n"); break;
                case 3: printf("Treze\n"); break;
                case 4: printf("Quatorze\n"); break;
                case 5: printf("Quinze\n"); break;
                case 6: printf("Dezesseis\n"); break;
                case 7: printf("Dezessete\n"); break;
                case 8: printf("Dezoito\n"); break;
                case 9: printf("Dezenove\n"); break;
            }
        } else {
            printDezena(dezena);
            if (unidade != 0) {
                printf("e ");
                printUnidade(unidade);
            }
        }
    }

    return 0;
}