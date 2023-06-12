// Nome na vertical em escada invertida. Altere o programa anterior de modo que a escada seja invertida.
// Programa anterior: Nome na vertical em escada. Modifique o programa anterior de forma a mostrar o nome em formato de escada.

#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main() {
    char nome[100];

    printf("Digite seu nome:\n");
    fgets(nome, sizeof(nome), stdin);

    printf("Nome na vertical em escada:\n");

// Literalmente só inverti a ordem do último exercício
// Antes o i crescia de 0 até o tamanho do nome, agora o ele decresce do tamanho do nome até 0
    for (int i = strlen(nome) - 1; i >= 0; i--) {
        // E aqui não é mais < ou igual, pois, dessa forma, iria printar o nome completo 2 vezes, uma com "\0" e outra sem
        for (int j = 0; j < i; j++) {
            printf("%c", nome[j]);
        }
        printf("\n");
    }
}