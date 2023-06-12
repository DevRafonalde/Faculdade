// Nome na vertical em escada. Modifique o programa anterior de forma a mostrar o nome em formato de escada.
// Programa anterior: Nome na vertical. Faça um programa que solicite o nome do usuário e imprima-o na vertical.

#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main() {
    char nome[100];

    printf("Digite seu nome:\n");
    fgets(nome, sizeof(nome), stdin);

    printf("Nome na vertical em escada:\n");

    // Aqui eu retiro 1 do range do loop (strlen(nome)) por conta do "\O" padrão no final da string
    for (int i = 0; i < strlen(nome) - 1; i++) {
        for (int j = 0; j <= i; j++) {
            printf("%c", nome[j]);
        }
        printf("\n");
    }
}