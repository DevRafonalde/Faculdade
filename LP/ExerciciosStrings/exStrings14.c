// Leet spek generator. Leet é uma forma de se escrever o alfabeto latino usando outros símbolos em lugar das letras, como números por exemplo. A própria palavra leet admite muitas variações, como l33t ou 1337.
// O uso do leet reflete uma subcultura relacionada ao mundo dos jogos de computador e internet, sendo muito usada para confundir os iniciantes e afirmar-se como parte de um grupo.
// Pesquise sobre as principais formas de traduzir as letras. Depois, faça um programa que peça uma texto e transforme-o para a grafia leet speak.

#include <stdio.h>
#include <string.h>

#define MAX_TEXTO 100

void converterParaLeet(char *texto) {
    int tamanho = strlen(texto);
    int i;
    for (i = 0; i < tamanho; i++) {
        switch (texto[i]) {
            case 'a':
            case 'A':
                texto[i] = '4';
                break;
            case 'e':
            case 'E':
                texto[i] = '3';
                break;
            case 'i':
            case 'I':
                texto[i] = '1';
                break;
            case 'o':
            case 'O':
                texto[i] = '0';
                break;
            case 's':
            case 'S':
                texto[i] = '5';
                break;
            case 't':
            case 'T':
                texto[i] = '7';
                break;
            default:
                // Mantém os outros caracteres inalterados
                break;
        }
    }
}

int main() {
    char texto[MAX_TEXTO];

    printf("Digite o texto: ");
    fgets(texto, MAX_TEXTO, stdin);
    texto[strlen(texto) - 1] = '\0';

    converterParaLeet(texto);

    printf("Texto em Leet Speak: %s\n", texto);

    return 0;
}
