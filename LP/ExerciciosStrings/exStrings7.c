// Conta espaços e vogais. Dado uma string com uma frase informada pelo usuário (incluindo espaços em branco), conte:
//    quantos espaços em branco existem na frase.
//    quantas vezes aparecem as vogais a, e, i, o, u.

#include <stdio.h>
#include <ctype.h>

int main() {
    char frase[100];
    int espacos = 0;
    int vogais = 0;
    int i;

    printf("Digite uma frase: ");
    // Caso não se lembre o q significa essa linha de código abaixo, retorne ao exStrings1. Lá eu indico por meio de comentários o que significa
    fgets(frase, sizeof(frase), stdin);

    // Contar espaços em branco
    for (i = 0; frase[i] != '\0'; i++) {
        if (frase[i] == ' ') {
            espacos++;
        }
    }

    // Contar vogais (a, e, i, o, u)
    for (i = 0; frase[i] != '\0'; i++) {
        char letraMinuscula = tolower(frase[i]);
        if (letraMinuscula == 'a' || letraMinuscula == 'e' || letraMinuscula == 'i' || letraMinuscula == 'o' || letraMinuscula == 'u') {
            vogais++;
        }
    }

    printf("Quantidade de espaços em branco: %d\n", espacos);
    printf("Quantidade de vogais (a, e, i, o, u): %d\n", vogais);
}
