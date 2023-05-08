// Faça um Programa que verifique se uma letra digitada é vogal ou consoante.
#include <stdio.h>

int main() {
    char letra;
    int eConsoante;
    printf("Insira uma letra:\n");
    scanf("%c", &letra);
    eConsoante = (letra != 'a' && letra != 'A')
        && (letra != 'e' && letra != 'E')
        && (letra != 'i' && letra != 'I')
        && (letra != 'o' && letra != 'O')
        && (letra != 'u' && letra != 'U');

    if (65 <= letra && letra <= 122) {
        if (eConsoante == 1) {
            printf("A letra inserida é uma consoante");
        } else {
            printf("A letra inserida é uma vogal");
        }
    } else {
        printf("O caractere inserido é um número");
    }
}