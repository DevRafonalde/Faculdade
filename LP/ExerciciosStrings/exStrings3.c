// Nome na vertical. Faça um programa que solicite o nome do usuário e imprima-o na vertical.

#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main() {
    char nome[100];

    printf("Digite seu nome:\n");
    fgets(nome, sizeof(nome), stdin);

    printf("Nome na vertical:\n");

    // Aqui eu retiro 1 do range do loop (strlen(nome)) por conta do "\O" padrão no final da string
    for (int i = 0; i < strlen(nome) - 1; i++) {
        printf("%c\n", nome[i]);
    }
    printf("\n");
}