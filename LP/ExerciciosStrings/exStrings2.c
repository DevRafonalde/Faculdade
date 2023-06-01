// Nome ao contrário em maiúsculas.
// Faça um programa que permita ao usuário digitar o seu nome e em seguida mostre o nome do usuário de trás para frente utilizando somente letras maiúsculas.
// Dica: lembre−se que ao informar o nome o usuário pode digitar letras maiúsculas ou minúsculas.

#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main() {
    char nome[100];
    int i;

    printf("Digite seu nome:\n");
    fgets(nome, sizeof(nome), stdin);

    printf("Nome invertido em letras maiúsculas:");

    // Aqui eu retiro 1 do tamanho da variável i por conta do "\O" padrão no final da string
    for (i = strlen(nome) - 1; i >= 0; i--) {
        // A função toupper server para transformar todos os caracteres em caixa alta
        printf("%c", toupper(nome[i]));
    }
    printf("\n");
}