// Palíndromo. Um palíndromo é uma sequência de caracteres cuja leitura é idêntica se feita da direita para esquerda ou vice−versa. Por exemplo: OSSO e OVO são palíndromos.
// Em textos mais complexos os espaços e pontuação são ignorados. A frase SUBI NO ONIBUS é o exemplo de uma frase palíndroma onde os espaços foram ignorados. Faça um programa que leia uma sequência de caracteres, mostre−a e diga se é um palíndromo ou não.

// OBS: Esse exercício não funcionou corretamente no terminal do meu vscode (não sei dizer o pq), então, caso não funcione para você também, tente fazer pelo CMD do Windows, aqui funcionou por ele

#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdbool.h>

char removerAcentos(unsigned char letra) {
    switch (letra) {
        case 225: case 224: case 227: case 226:
            return 'a';
        case 233: case 232: case 234:
            return 'e';
        case 237: case 236: case 238:
            return 'i';
        case 243: case 242: case 245: case 244:
            return 'o';
        case 250: case 249: case 251:
            return 'u';
        case 231:
            return 'c';
        default:
            return letra;
    }
}

int main() {
    char frase[100];
    char fraseLimpa[100];
    bool palindromo = true;

    printf("Digite uma sequência de caracteres: ");
    fgets(frase, sizeof(frase), stdin);

    // Aqui eu removo o "\0"
    frase[strcspn(frase, "\n")] = '\0';

    // Aqui eu removo os espaços e pontuações da frase
    int k = 0;
    for (int i = 0; frase[i] != '\0'; i++) {
        unsigned char caractere = tolower(frase[i]);
        if (!isspace(caractere)) {
            caractere = removerAcentos(caractere);
            fraseLimpa[k++] = caractere;
        }
    }
    fraseLimpa[k] = '\0';

    // Verificar se a frase limpa é um palíndromo
    for (int i = 0, j = strlen(fraseLimpa) - 1; i < j; i++, j--) {
        if (fraseLimpa[i] != fraseLimpa[j]) {
            palindromo = false;
            break;
        }
    }

    printf("Sequência de caracteres: %s\n", frase);
    printf("Sequência de caracteres limpa: %s\n", fraseLimpa);

    if (palindromo) {
        printf("É um palíndromo.\n");
    } else {
        printf("Não é um palíndromo.\n");
    }
}